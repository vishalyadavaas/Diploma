# 1. Handling Division by Zero
try:
    print(10/0)

except ZeroDivisionError:
    print("Cannot divide by zero")

# 2. Accessing a Non-Existent Key in a Dictionary
my_dict = {
    'name' : 'Vishal',
    'age' : 30
}
try:
    print(my_dict['city'])
except KeyError:
    print("Error : Key not found in dictionary")

# 3. Handling Invalid Type Conversions
try:
    age = int("hello")
except ValueError:
    print("Error : Invalid value for conversion to interger")