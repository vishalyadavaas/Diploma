# positional argument(Regular arguments)
def info(name,school):
    print(f"Are you {name} ?")
    print(f"Are you from {school} ?")

info("Vishal", "CSJM")
# info("CSJM", "Vishal")

# keyword argument
def greet(name,time):
    print(f"hello {name}")
    print(f"{time}")

greet(name="Vishal",time="Good morning")

# defult parameter
def math(x=10,y=40):
    print(x+y)

# math()
math(50,90)

# variable length arguments
def my_fun(*args):
    sum = 0
    for i in args:
        sum += i
    print(sum)

my_fun(1,2,3,4,5,6,7,8,9)
