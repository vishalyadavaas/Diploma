//----------------- multiple inheritance-----------------

abstract class animal{
    abstract void dog();
    abstract void cow();
}
abstract class small_animal extends animal{
    void dog(){
        System.out.println("This is dog");
    }
}

class big_animal extends small_animal{
    void cow(){
        System.out.println("This is Cow");
    }
}

public class Main {
    public static void main(String[] args) {
        big_animal obj = new big_animal();
        obj.dog();
        obj.cow();
    }
}
