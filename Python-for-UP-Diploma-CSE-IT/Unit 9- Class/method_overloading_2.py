class MathOperations: 

    def add(self, *args): 
        return sum(args) 

MathOper = MathOperations()
res1 = MathOper.add(10,20)
res2 = MathOper.add(10,20,30)
print(res1)
print(res2)