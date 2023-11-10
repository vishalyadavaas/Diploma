import java.util.Scanner;

class method_1 {
    static void fun() {  // creating method fun
        System.out.println("Hello Vishal");
    }

    static int add(int a, int b) {  // creating method add
        int result = a + b;
        return result;
    }

    public static void main(String[] args) {

        fun(); // method call

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = add(a, b); // method call
        System.out.println("Sum is : "+ sum);
        
        sc.close();
    }
    
}
