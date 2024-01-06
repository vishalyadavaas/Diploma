try:
    x = int(input("Enter 1st Number : "))
    y = int(input("Enter 2nd Number : "))
    print(x/y)

except ZeroDivisionError as zde:
    print("Can't Divide with Zero")

except ValueError as ve:
    print("please provide int value only")
