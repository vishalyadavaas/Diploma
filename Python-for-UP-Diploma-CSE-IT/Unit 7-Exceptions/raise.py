class UnderAgeException(Exception):
    def __init__(self,msg):
        self.msg = msg

class OverAgeException(Exception):
    def __init__(self,msg):
        self.msg = msg

age = int(input("Enter age : "))

if age < 18:
    raise UnderAgeException('You are under age')
elif age > 60:
    raise OverAgeException('You are over age')
else:
    print("You are eligible")
