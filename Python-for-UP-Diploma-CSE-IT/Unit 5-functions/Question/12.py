def average(*numbers):
    return sum(numbers) / len(numbers) if len(numbers) > 0 else 0

result = average(1,2,3,4,5,6,7,8,9)
print(f"Average : {result}")