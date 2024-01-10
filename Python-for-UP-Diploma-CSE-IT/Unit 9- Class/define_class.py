class Rectangle:
    def __init__(self,width,height):
        self.width = width
        self.height = height
    
    def area(self):
        return self.width * self.height
    
    def parameter(self):
        return 2 * (self.width + self.height)
    
my_rectangle = Rectangle(10,20)

print("Area of rectangle is :", my_rectangle.area())

print("Parameter of rectangle is :", my_rectangle.parameter())