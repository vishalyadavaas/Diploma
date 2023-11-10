// esme this constructor apne niche wale construcor ko call karta hai

class person{

    public person(){
        this(20);
        System.out.println("hello");
    }

    public person(int x){
        this(20, 20);
        System.out.println(x);
    }

    public person(int a, int b){
        System.out.println(a+b);
    }
}

public class thisMain{
    public static void main(String[] args) {
        new person();
    }
}