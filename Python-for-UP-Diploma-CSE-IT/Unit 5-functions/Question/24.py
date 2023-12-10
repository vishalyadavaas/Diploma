def outer_function(name,age):

    def inner_function():
        return f"Name : {name}" "\n" f"Age : {age}"
    return inner_function

result_function = outer_function("Vishal",17)

print(result_function())
