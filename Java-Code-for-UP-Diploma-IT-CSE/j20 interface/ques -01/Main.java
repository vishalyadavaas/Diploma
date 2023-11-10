//--------question-----------//

// Create an interface called Flyable with a method called fly(). 
// Create two classes called Bird and Airplane, and have both implement the Flyable interface. 
// Implement the fly() method in each class to print out a different message (e.g. "Flying like a bird" for Bird and "Flying like an airplane" for Airplane). 
// Then, create instances of both Bird and Airplane and call the fly() method on each.

//---------solution----------//

interface Flyable{
    void fly();
    default void run(){
        System.out.println("thid is boy");
    }
}

class Bird implements Flyable{
    public void fly(){
        System.out.println("Flying like a bird");
    }
}

class Airplane implements Flyable{
    public void fly(){
        System.out.println("Flying like an airplane");
    }
}

public class Main {
    public static void main(String[] args) {
        Bird bird = new Bird();
        Airplane airplane = new Airplane();

        bird.fly();
        airplane.fly();
        airplane.run();
    }
}
