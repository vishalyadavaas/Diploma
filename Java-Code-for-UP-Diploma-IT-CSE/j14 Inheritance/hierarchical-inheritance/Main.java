// types -- hierarchical inheritance

class Animal { // super class
    public void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal { // sub class
    public void bark() {
        System.out.println("Dog is barking");
    }
}

class Cat extends Animal { // sub class
    public void meow() {
        System.out.println("Cat is meowing");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();

        dog.eat();
        dog.bark();

        cat.eat();
        cat.meow();
    }
}
