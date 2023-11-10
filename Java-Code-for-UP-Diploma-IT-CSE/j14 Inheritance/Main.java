class A {
    static void food() {
        System.out.println("Class A food");
    }
}

class B extends A {
    static void food() {
        System.out.println("Class B food");
    }
}

public class Main {
    public static void main(String[] args) {
        A obj = new B();
        obj.food();
    }
}