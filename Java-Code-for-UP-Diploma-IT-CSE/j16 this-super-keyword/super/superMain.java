class question{
    int x;
}

class answer extends question{
    int y;
    public answer(int x ,int y, int z){
        super.x = x;  // refer the instance variable of parent class
        this.y = y; // refer the instance variable of current class
        System.out.println(z); // refer local variable
    }
}

public class superMain {
    public static void main(String[] args) {
        answer obj = new answer(10, 20, 30);
        System.out.println(obj.x);
        System.out.println(obj.y);
    }
}
