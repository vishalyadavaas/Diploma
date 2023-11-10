// ------- implementation multiple inheritance using Interface

interface book {
    void hindi_copy(); // interface method
}
interface geeta{
    void geeta_copy();  // interface method
}

class copy implements book,geeta {   // multiple inheritance
    public void hindi_copy() {
        System.out.println("This is hindi copy");
    }

    public void geeta_copy(){
        System.out.println("This is geeta copy");
    }
}

public class Main {
    public static void main(String[] args) {
        copy obj = new copy();
        obj.hindi_copy();
        obj.geeta_copy();
    }
}