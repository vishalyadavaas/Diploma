def calculate_average(*numbers):
    return sum(numbers) / len(numbers) if len(numbers) > 0 else 0

print(calculate_average(1,2,3))