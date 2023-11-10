# Write a function myReverse() which receives a string as an input and returns the reverse of the string. 
# Check if a given string is palindrome or not. 
def myReverse(Given_string):
    return Given_string[::-1]

Given_string = input("Enter a string: ")
RevStr = myReverse(Given_string)

print("Original string : ", Given_string)
print("Reverse string : ", RevStr)

if Given_string == RevStr:
    print("Given string is palindrome")
else:
    print("Given string is not palindrome")
