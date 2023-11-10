// ---------question--------------//

// Create an abstract class called Shape with an abstract method called getArea().
// Create two concrete subclasses of Shape called Rectangle and Circle. 
// Implement the getArea() method in each subclass to calculate and return the area of the shape (e.g. Rectangle should multiply its width and height, while Circle should use pi times the radius squared). 
// Then, create instances of both Rectangle and Circle and call the getArea() method on each.

// ----------solution------------//

abstract class Shape{
    abstract double getArea();
}

class Rectangle extends Shape{
    double getArea(){
        int l = 10;
        int b = 20;
        return l*b;
    }
}

class Circle extends Shape{
    double getArea(){
        int r = 6;
        return 3.14*r*r;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle();
        Circle circle = new Circle();
        System.out.println(rectangle.getArea());
        System.out.println(circle.getArea());
    }
}
