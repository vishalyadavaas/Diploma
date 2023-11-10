#Swap two integer numbers using a temporary variable. Repeat the exercise using the code format: a, b = b, a. 
# Verify your results in both the cases. 

def swap1(a,b):
    print("Before swapping :")
    print("a = ",a)
    print("b = ",b)
    temp = a
    a = b
    b = temp
    print("After swapping :")
    print("a = ",a)
    print("b = ",b)

def swap2(a,b):
    print("Before swapping :")
    print("a = ",a)
    print("b = ",b)
    a,b = b,a
    print("After swapping :")
    print("a = ",a)
    print("b = ",b)

swap1(10,20)
swap2(4,5)