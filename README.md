Welcome to my coding resposibility.This is a collection of the programs I have while learning diffrent programming languages.
CALCULATOR:
      A simbple C program to perform basis arithmatic operation like addition,subtraction,mulplication,division.
MATH PRACTICE:
      A set of C++ programs focusing on loop multplication table,and other logic-based programs.
PYTHON BASICS:
      A starting point for my Python learning journy.
OTHERS:
      Additional practise code I have worked on.


PROJECT:
    DIGITAL WALLET & TRANSACTION MANAGEMENT SYSTEM:
    
      Atomicity guarantees that all statements in a financial transaction execute successfully or none at all. By using `conn.start_transaction()`,          `COMMIT`, and `ROLLBACK`, we ensure money can never be deducted from a sender without reaching the receiver.

      By using `SELECT ... FOR UPDATE`, the application places an exclusive write-lock on the sender's row. This prevents race conditions where simultaneous requests try to spend the same funds.

      Parameterized queries using tuple placeholders `(%s, %s)` guarantee that user inputs are sanitized and treated strictly as literal values, effectively neutralizing SQL injection exploits.

      The application validates data types, positive values, and identical account edge cases before sending queries to the database layer, saving compute and database lock resources.
      
