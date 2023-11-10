# WAP for simple calculator
def add(a,b):
    return a+b
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b

operator = input("Enter the operator (+,-,*,/) : ")
if operator not in ('+','-','*','/'):
    print("Invalid operator")
    exit()
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

if operator == '+':
    print(add(a,b))
elif operator == '-':
    print(sub(a,b))
elif operator == '*':
    print(mul(a,b))
elif operator == '/':
    print(div(a,b))
else:
    print("Invalid operator")
