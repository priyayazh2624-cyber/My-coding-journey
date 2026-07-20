
try:
    a=int(input("Enter a first number: "))
    b=int(input("Enter a second number:"))
    c=a/b
    print(c)
except ZeroDivisionError as  e:
    print("denominator cant be zero")




try:
    int=int("Welcome")
except  ValueError as e:
    print("please enter numbers only")


try:
    a= [10,20,30,40]
    print(a[10])
except IndexError as e:
    print("Invalid Index")
    
