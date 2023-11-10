// question - Write a program to print the value if it is even and divisible by 3.

import java.util.Scanner;

class ques_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a Number : ");
        int num = sc.nextInt();

        if (num % 2 == 0 && num % 3 == 0) {
            System.out.println("Found Number - " + num);
        }

        sc.close();
    }
}
