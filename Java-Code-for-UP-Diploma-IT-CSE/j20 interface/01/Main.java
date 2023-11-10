// ---- 

interface friend{
    int a = 10;
    void boy_friend(); // interface method
}

class student implements friend{
    public void boy_friend(){
        System.out.println("This is example of Interface");
        System.out.println(a);
    }
}

public class Main {
    public static void main(String[] args) {
        student obj = new student();
        obj.boy_friend();
    }
}
