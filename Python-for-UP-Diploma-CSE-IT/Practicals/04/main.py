# find the number is prime or not

n = int(input("What is your favorite number? "))

if n<2:
    print(n, "is not prime")
else:
    for i in range(2, n):
        if n % i == 0:
            print(n, "is not prime")
            break
    else:
        print(n, "is prime")
