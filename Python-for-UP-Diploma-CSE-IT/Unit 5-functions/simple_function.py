# simple function
def simple_function():
    print("hello world")

simple_function()
# function with arguments and no return value
def myfun(a,b):
    sum = a+b
    print(sum)
myfun(20,30)

# function with arguments and with return value
def fun_return(a,b):
    sum = a+b
    return sum
print(fun_return(100,200))

# function documentation
def fun_doc(name):
    """ This function prints the name passed as an argument. """
    print(name)
fun_doc("Vishal Yadav")

# function Keyword and Optional Parameters

def greet(name, msg = "Hello"):
    return f"{msg},{name}"

return1 = greet("Vishal Yadav") # uses default msg
return2 = greet("Vishal Yadav", "Hii") # overrides default msg
print(return1)
print(return2)