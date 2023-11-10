//----- multiple inheritance question-----//

interface water{
    void swim();
}

interface land{
    void run();
}

class Turtle implements water,land{
    public void swim(){
        System.out.println("Turtle live in water");
    }
    public void run(){
        System.out.println("Turtle runing on land");
    }
}

public class Main {
    public static void main(String[] args) {
        Turtle turtle = new Turtle();
        turtle.swim();
        turtle.run();
    }
}
