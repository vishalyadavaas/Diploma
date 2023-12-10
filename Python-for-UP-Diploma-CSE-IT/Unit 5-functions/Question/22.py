add = lambda x,y : x + y
subtract = lambda x,y : x - y
multiply = lambda x,y : x * y
divide = lambda x,y : x / y

my_dictionary = {
    'add' : add,
    'subtract' : subtract,
    'mutiply' : multiply,
    'divide' : divide
}

def operations(a,b,operation_name):
    return my_dictionary[operation_name](a,b)

result = operations(10,20,'add')
print(result)