global_variable = "I am Global" #global variable
def scope_example():
    local_variable = "I am Local" #local variable
    print(f"Inside funtion - {global_variable},{local_variable}")

scope_example()
print(f"Outside functon - {global_variable}")