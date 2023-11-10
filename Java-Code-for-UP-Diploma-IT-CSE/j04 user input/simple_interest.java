import java.util.Scanner;

class simple_interest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Principal amount (P) : ");
        float P = sc.nextFloat();
        System.out.println("Enter the rate (R) : ");
        float R = sc.nextFloat();
        System.out.println("Enter the Time (T) : ");
        float T = sc.nextFloat();
        float SI = (P*R*T)/100;
        System.out.println("Simple Interest is : "+ SI);

        sc.close();
    }
}
