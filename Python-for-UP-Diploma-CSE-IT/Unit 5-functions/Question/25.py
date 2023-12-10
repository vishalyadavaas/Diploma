def outer_function():
    count = 0
    def inner_function():
        nonlocal count
        count += 1
        return count
    return inner_function

result_function = outer_function()
print(result_function())
print(result_function())
print(result_function())