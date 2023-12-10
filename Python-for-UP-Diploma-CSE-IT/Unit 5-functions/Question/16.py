def apply_operation(a,b,sqaure):
    result = sqaure(a,b)
    print(result)

sqaure = lambda x,y : x+y
apply_operation(10,20,sqaure)