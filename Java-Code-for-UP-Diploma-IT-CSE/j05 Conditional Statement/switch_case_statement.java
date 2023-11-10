// Question - Write a program to print the day based on the day number.

import java.util.Scanner;

class switch_case_statement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Number of day to get Dayname : ");
        int day = sc.nextInt();

        switch (day) {
            case 1:
                System.out.println("Sunday");
                break;

            case 2:
                System.out.println("Monday");
                break;

            case 3:
                System.out.println("Tuesday");
                break;

            case 4:
                System.out.println("Wednesday");
                break;

            case 5:
                System.out.println("Thrusday");
                break;

            case 6:
                System.out.println("Friday");
                break;

            case 7:
                System.out.println("Sataurday");
                break;

            default:
                System.out.println("Invalid Day");
        }

        sc.close();
    }
}
