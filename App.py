import mysql.connector
import tkinter as tk
from tkinter import messagebox,ttk


DB_CONFIG={
           'host':'localhost',
           'user':'root',
           'password':'root',
           'database':'DigitalWallet'
           }

def get_db_connection():
    try:
        return mysql.connector.connect(**DB_CONFIG)
    except mysql.connector.Error as err:
        print(f"Database Connection Error:{err}")
        return None
'''Add the transaction handling logic to app.py.This function uses Automatic
transaction(start_transaction,commit,rollback)and Row Locking
(FOR UPDATE)to keep fund transfers secure:'''


def process_transfer(sender_id,receiver_id,amount):
    conn=get_db_connection()
    if not conn:
        return False,"Database connection error."
    cursor=conn.cursor()

    try:
        #Start transaction block
        conn.start_transaction()

        #Check Sender Balence with rowlock
        cursor.execute("SELECT balance FROM Users WHERE account_id=%s FOR UPDATE",(sender_id,))
        sender=cursor.fetchone()

        if not sender:
            raise Exception("Sender account does not exist.")
        if sender[0]<amount:
            raise Exception("Insufficient funds.")


        #Check Receiver Existence
        cursor.execute("SELECT account_id FROM Users WHERE account_id=%s",(receiver_id,))
        if not cursor.fetchone():
            raise Exception("Receiver account does not exist.")

        #Transfer funds
        cursor.execute("UPDATE Users SET balance=balance - %s WHERE account_id=%s",(amount,sender_id))
        cursor.execute("UPDATE Users SET balance=balance + %s WHERE account_id=%s",(amount,receiver_id))
        
        #Log transaction
        cursor.execute(
            "INSERT INTO Transactions(sender_id,receiver_id,amount)VALUES(%s, %s, %s)",(sender_id,receiver_id,amount)
            )


        #Commit permanently
        conn.commit()
        return True,"Transfer Successful!"
    except Exception as e:
        #Roll back on error
        conn.rollback()
        return False,str(e)
    finally:
        cursor.close()
        conn.close()

'''
Build the Desktop Frontend of (GUI)
         Now add the Tkinter graphical user interface to app.py so users can intract wiht the app.
              1.  Add the following GUI codr below your backend logic in app.py.
'''



class WalletApp:
    def __init__(self, root):
        self.root=root
        self.root.title("Digital Wallet System")
        self.root.geometry("420x450")
        self.root.resizable(False,False)

        title=tk.Label(root,text="Digital Wallet System",font=("Helvetica",16,"bold"),fg="#003087")
        title.pack(pady=15)

        frame=tk.Frame(root,padx=20,pady=10)
        frame.pack(fill="both",expand=True)

        #Entry fields
        tk.Label(frame,text="Sender Account ID:",font=("Helvetica",10)).grid(row=0,column=0,sticky="w",pady=5)
        self.sender=tk.Entry(frame,width=25)
        self.sender.grid(row=0,column=1,pady=5)

        tk.Label(frame,text="Receiver Account ID:",font=("Helvetica",10)).grid(row=1,column=0,sticky="w",pady=5)        
        self.receiver=tk.Entry(frame,width=25)
        self.receiver.grid(row=1,column=1,pady=5)

        tk.Label(frame,text="Amount($):",font=("Helvetica",10)).grid(row=2,column=0,sticky="w",pady=5)
        self.amount=tk.Entry(frame,width=25)
        self.amount.grid(row=2,column=1,pady=5)

         #Action Button
        btn_transfer=tk.Button(
             frame,text="Send Money",bg="#0070BA",fg="white",
             font=("Helvetica",10,"bold"),command=self.handle_transfer
             )
        btn_transfer.grid(row=3,columnspan=2,pady=15,ipadx=20)

         #Live Dashboard
        tk.Label(frame,text="Live User Accounts",font=("Helvetica",11,"bold")).grid(row=4,columnspan=2,pady=(10,5))
        self.tree=ttk.Treeview(frame,columns=("ID","Name","Balance"),show="headings",height=6)
        self.tree.heading("ID",text="ID")
        self.tree.heading("Name",text="Name")
        self.tree.heading("Balance",text="Balance($)")
        self.tree.column("ID",width=40,anchor="center")
        self.tree.column("Name",width=160,anchor="w")
        self.tree.column("Balance",width=100,anchor="e")
        self.tree.grid(row=5,columnspan=2)

        self.refresh_accounts()

    def  handle_transfer(self):
        sender_str=self.sender.get().strip()
        receiver_str=self.receiver.get().strip()
        amount_str=self.amount.get().strip()

         #Front-end input validation
        if not (sender_str and receiver_str and amount_str):
            messagebox.showwarning("Warning","All fields are required!")
            return

        try:
            sender_id=int(sender_str)
            receiver_id=int(receiver_str)
            amount=float(amount_str)

            if amount <=0:
                messagebox.showwarning("Warning","Amount must be greater than zero.")
                return
            if sender_id==receiver_id:
                messagebox.showwarning("Warning","Sender and receiver cannot be the same account.")
                return
        except ValueError:
            messagebox.showerror("Error","Account IDs must be integers and Amount must be a valid number.")
            return

        #Execute backend process
        success, message=process_transfer(sender_id,receiver_id,amount)

        if success:
            messagebox.showinfo("Success",message)
            self.sender.delete(0,tk.END)
            self.receiver.delete(0,tk.END)
            self.amount.delete(0,tk.END)
            self.refresh_accounts()
        else:
            messagebox.showerror("Transfer Failed",message)

    def refresh_accounts(self):
        for item in self.tree.get_children():
            self.tree.delete(item)

        conn=get_db_connection()
        if conn:
            cursor=conn.cursor()
            cursor.execute("SELECT account_id,full_name,balance FROM Users")
            for row in cursor.fetchall():
                self.tree.insert("","end",values=(row[0],row[1],f"{row[2]:.2f}"))
            cursor.close()
            conn.close()
                 


if __name__=="__main__":
    root=tk.Tk()
    app=WalletApp(root)
    root.mainloop()
