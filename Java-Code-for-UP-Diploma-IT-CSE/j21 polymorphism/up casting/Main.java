class parent{
    void run(){
        System.out.println("Parent Class");
    }
}

class child extends parent{
    void eat(){
        System.out.println("Child Class");
    }
}

public class Main {
    public static void main(String[] args) {
        parent obj = new child(); // Upcasting
        obj.run();
    }
}
