def square(num):
    return num**2

numbers = [1,2,3,4,5]
result = map(square,numbers)
final_answer = list(result)
print(final_answer)
