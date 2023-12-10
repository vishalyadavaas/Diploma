def square_number(given_list,square):
    result = map(square,given_list)
    return list(result)

given_list = [1,2,3,4,5]
square = lambda x : x ** 2
answer = square_number(given_list,square)
print(answer)