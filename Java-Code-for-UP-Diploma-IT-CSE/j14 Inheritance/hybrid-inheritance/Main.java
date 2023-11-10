// types -- hybrid inheritance

class Animal{
    public void eat(){
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal{
    public void bark(){
        System.out.println("Dog is barking");
    }
}

class BabyDog extends Dog{
    public void weap(){
        System.out.println("BabyDog is weaping");
    }
}

class BigDog extends Dog{
    public void run(){
        System.out.println("BigDog is running");
    }
}
public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        BabyDog babyDog = new BabyDog();
        BigDog bigDog = new BigDog();

        dog.eat();
        dog.bark();

        babyDog.eat();
        babyDog.bark();
        babyDog.weap();

        bigDog.bark();
        bigDog.run();
    }
}
