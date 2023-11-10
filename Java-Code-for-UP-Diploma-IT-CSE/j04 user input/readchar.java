import java.util.Scanner;

class readchar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sc.next();

        System.out.println("Enter the index of string, which you want to read (in java index start with zero) : ");
        int n = sc.nextInt();

        System.out.println("String is : " + str);
        System.out.println("Entered Index Character : " + str.charAt(n));

        sc.close();
    
    }
}
