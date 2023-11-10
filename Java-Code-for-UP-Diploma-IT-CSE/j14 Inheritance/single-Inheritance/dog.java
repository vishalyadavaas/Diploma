// types --- Single inheritance

class animal { // super class or base class or parent class
    public void eat() {
        System.out.println("I am eating");
    }
}

public class dog extends animal { // sub class or derived class or child class
    public static void main(String[] args) {
        dog obj = new dog();
        obj.eat();
    }
}
