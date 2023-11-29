# local scope
def fun_local():
    name = "Vishal" # local scope
    print(name)

num = 45 # global scope
def fun_global():
    print(num)

print("Local scope")
fun_local()
print("Global scope")
fun_global()