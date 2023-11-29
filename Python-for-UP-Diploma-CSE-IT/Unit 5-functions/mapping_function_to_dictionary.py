def double(x):
    return x*2

def square(x):
    return x**2

def cube(x):
    return x**3

fun_dictionary ={
    'double' : double,
    'square' : square,
    'cube' : cube
}

result_double = fun_dictionary['double'](10)
result_square = fun_dictionary['square'](7)
result_cube = fun_dictionary['cube'](2)

print(result_double)
print(result_square)
print(result_cube)