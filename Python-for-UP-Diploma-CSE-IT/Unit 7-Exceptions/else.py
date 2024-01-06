# Case 1 -- exception in try block
try:
    print(10/0)

except ZeroDivisionError:
    print("Cannot divide by zero")

else:
    print("No exception")

# Case 2 -- no exception in try block
try:
    print(10/5)

except ZeroDivisionError:
    print("Cannot divide by zero")

else:
    print("No exception")