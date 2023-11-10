import java.util.Scanner;

class book{     // creating class
    int add(int a, int b){ // creating method
        int res = a+b;
        return res;
    }
}

public class method_2 {
    public static void main(String[] args) {

        book obj = new book(); // creating object of Book class

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers : ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.print("Sum is : ");
        int sum = obj.add(a, b);  // method call using class object
        System.out.println(sum);

        sc.close();
    }
}
