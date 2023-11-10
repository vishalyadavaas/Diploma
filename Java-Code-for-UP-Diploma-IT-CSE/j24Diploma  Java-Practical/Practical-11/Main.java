interface animal{
    void speak();
    void run();
}

abstract class dog implements animal{
    public void speak(){
        System.out.println("Speak");
    }
}

class baby_dog extends dog{
    public void run(){
        System.out.println("Baby_dog");
    }
}

public class Main{
    public static void main(String[] args) {
        baby_dog obj = new baby_dog();
        obj.speak();
        obj.run();
    }
}