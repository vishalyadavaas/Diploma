import java.util.Scanner;

class conditional__operator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int num = sc.nextInt();

        String str;
        str = (num % 2 == 0) ? "Even" : "Odd";

        System.out.println(str);

        sc.close();
    }
}
