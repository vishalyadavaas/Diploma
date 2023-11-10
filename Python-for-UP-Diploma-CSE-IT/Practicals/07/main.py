# Find the largest of n numbers, using a user defined function largest(). 

def largest(n):
    if len(n) == 0:
        return None
    max = n[0]
    for num in n:
        if num > max:
            max = num

    return max

n = input("Enter a list of numbers separated by commas: ").split(",")
result = largest(n)
print(f"Largest number is {result}")