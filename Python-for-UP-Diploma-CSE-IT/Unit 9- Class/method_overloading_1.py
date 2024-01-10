class details:
    def info(self):
        print("Hello")
    
    def info(self,FirstName=''):
        print(f"Hello {FirstName}")
    
    def info(self,FirstName='',LastName=''):
        print(f"Hello {FirstName} {LastName}")

About = details()
About.info()
About.info("Vishal")
About.info("Vishal","Yadav")