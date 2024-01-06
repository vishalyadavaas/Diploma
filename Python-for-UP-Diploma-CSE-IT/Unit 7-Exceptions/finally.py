# case 1 --exception raise

try:
    print(10/0)

except ZeroDivisionError:
    print("Cannot divide by zero")

finally:
    print("This is the finally block")

# case 2 -- no exception raise

try:
    print(10/5)

except ZeroDivisionError:
    print("Cannot divide by zero")

finally:
    print("This is the finally block")