# function as variable-
def my_fun(num):
    return num**2

sqaure = my_fun(5) 
print(sqaure)

# funtion as argument
def sqaure(num):
    print(num**2)

def display(sqaure):
    sqaure(6)

display(sqaure)

# function as return value
def counter():
    count = 0
    def increment():
        nonlocal count
        count += 1
        return count
    return increment

counter1 = counter()
print(counter1())
print(counter1())

# function store in data structure
def add(a,b):
    return a + b

def sub(a,b):
    return a - b

operations = [add,sub]

result1 = operations[0](5,4)
result2 = operations[1](10,5)
print(result1)
print(result2)