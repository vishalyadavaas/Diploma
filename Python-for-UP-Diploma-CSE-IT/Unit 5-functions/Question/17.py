addition = lambda x,y : x + y
subtraction = lambda x,y : x - y
multiplication = lambda x,y : x * y
division = lambda x,y : x / y

function_list = [addition,subtraction,multiplication,division]

def operations(a,b,index):
    result = function_list[index](a,b)
    return result

answer = operations(30,2,3)
print(answer)