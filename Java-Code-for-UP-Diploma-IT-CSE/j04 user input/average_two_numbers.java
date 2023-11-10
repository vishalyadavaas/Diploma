import java.util.Scanner;

class average_two_numbers{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 1st Number : ");
        int num_1 = sc.nextInt();
        System.out.println("Enter 2nd Number : ");
        int num_2 = sc.nextInt();
        int avg = (num_1+num_2)/2;

        System.out.println("Average of two number is : "+ avg);

        sc.close();
    }
}
