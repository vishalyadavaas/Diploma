import java.util.Scanner;

class user_input{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your Name : ");
        String name = sc.nextLine();
        System.out.print("Enter Your Age : ");
        int age = sc.nextInt();

        System.out.println("Name : "+ name);
        System.out.println("Age : "+ age);

        sc.close();
    }
}