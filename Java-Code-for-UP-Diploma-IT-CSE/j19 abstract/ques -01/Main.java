// --------Question------------//

// Create an abstract class called Animal with an abstract method called speak(). 
// Create two concrete subclasses of Animal called Dog and Cat. 
// Implement the speak() method in each subclass to print out a different message (e.g. "Woof" for Dog and "Meow" for Cat). 
// Then, create instances of both Dog and Cat and call the speak() method on each.

// ----------Solution----------//

abstract class Animal{
    abstract void speak();
}

class Dog extends Animal{
    void speak(){
        System.out.println("Woof");
    }
}

class Cat extends Animal{
    void speak(){
        System.out.println("Meow");
    }
}


public class Main {
    public static void main(String[] args) {

        Dog dog = new Dog();
        Cat cat = new Cat();
        dog.speak();
        cat.speak();
    }
} 

    