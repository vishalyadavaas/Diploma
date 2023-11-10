// ------------question-----------------//

// Create an abstract class called Vehicle with an abstract method called drive(). 
// Create two concrete subclasses of Vehicle called Car and Truck. 
// Implement the drive() method in each subclass to print out a different message (e.g. "Driving car" for Car and "Driving truck" for Truck). 
// Then, create instances of both Car and Truck and call the drive() method on each.

// --------------solution--------------//

abstract class Vehicle{
    abstract void drive();
}

class Car extends Vehicle{
    void drive(){
        System.out.println("Driving car");
    }
}

class Truck extends Vehicle{
    void drive(){
        System.out.println("Driving truck");
    }
}

public class Main {
    public static void main(String[] args) {
        Car car = new Car();
        Truck truck = new Truck();
        car.drive();
        truck.drive();
    }
}
