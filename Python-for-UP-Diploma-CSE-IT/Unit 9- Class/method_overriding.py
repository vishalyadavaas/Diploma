class Test:
    def show(self):
        print("This is a test")

class Dbms(Test):
    def show(self):
        # super().show()
        print("This is math Test")
    
d = Dbms()
d.show()