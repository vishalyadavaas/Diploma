import mypackage.*;

public class vishal {
    public static void main(String[] args) {

        // class name is mypack

        mypack obj1 = new mypack();
        System.out.println("Addition : " + obj1.add(10, 20));
        System.out.println("Subtraction : " + obj1.sub(20, 10));

        // class name is mypack1

        mypack1 obj2 = new mypack1();
        System.out.println("Multipliction : " + obj2.mul(10, 20));
        System.out.println("Division : " + obj2.div(100, 10));
    }
}
