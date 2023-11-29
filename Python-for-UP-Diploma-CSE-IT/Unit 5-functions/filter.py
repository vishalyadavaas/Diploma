
def even_number(num):
    return num % 2 == 0

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = filter(even_number,numbers)
final_answer = list(result)
print(final_answer)