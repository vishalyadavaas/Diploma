class Teacher_info:
    def __init__(self,name,title):
        self.name = name
        self.title = title
    
    def info(self):
        print(f"My name is {self.name}")
        print(f"I am teacher of {self.title}")
    

class Teacher_moreInfo(Teacher_info):
    def about(self,address):
        print(f"My address : {address}")

Vishal = Teacher_moreInfo("Vishal Yadav","Python")

Vishal.info()
Vishal.about("Basti")