// types -- multilevel inheritance

class animal { // super class
    public void eat() {
        System.out.println("I am eating");
    }
}

class dog extends animal { // super class and subclass (both)
    public void bark() {
        System.out.println("I am barking");
    }
}

public class babyDog extends dog { // subclass
    public static void main(String[] args) {
        babyDog obj = new babyDog();
        obj.eat();
        obj.bark();

        //
        dog obj1 = new dog();
        obj1.eat();
    }
}
