// super constructor apne upar wale constructor ko call krta hai 
//it means sub class ka constructor parent class ke constructor ko call krta hai

class book {
    public book(int a, int b) {
        System.out.println(a + b);
    }
}

class hindi extends book {
    public hindi() {
        super(25, 25);
        System.out.println("This is hindi book");
    }
}

public class superMain {
    public static void main(String[] args) {
        new hindi();
    }
}
