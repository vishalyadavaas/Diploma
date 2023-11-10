abstract class book{
    abstract void math();
    abstract void hindi();
    void english(){
        System.out.println("This is english book");
    }
}

class paper extends book{
    void math(){
        int n=5;
        System.out.println("Table of "+n);
        for(int i=1;i<=10;i++){
            System.out.println(n*i);
        }
    }
    void hindi(){
        System.out.println("This is hindi book");
    }
}

public class Main{
    public static void main(String[] args) {
        paper obj = new paper();
        obj.english();
        obj.math();
        obj.hindi();
    }
}