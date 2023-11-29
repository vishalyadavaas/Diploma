def outer_function(x):
    def inner_function(y):
        return x + y
    result_inner = inner_function(5)
    return result_inner

result_outer = outer_function(10)
print(result_outer)
