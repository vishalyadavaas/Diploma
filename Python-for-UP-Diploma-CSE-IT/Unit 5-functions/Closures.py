# first example of closure--
def outer_function():
    def inner_function():
        name = "Vishal Yadav"
        print(name)
    return inner_function

result_outer = outer_function()
result_outer()

# 2nd example of closures
# def outer_function(x):
#     def inner_function(y):
#         return x + y
#     return inner_function

# result_outer = outer_function(10)
# result_inner = result_outer(20)
# print(result_inner)