class Animal{
    void run(){
        System.out.println("Hello Animal");
    }
}

class Dog extends Animal{
    void run(){
        System.out.println("Hello Dog");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog obj = new Dog();
        obj.run();
    }
}
