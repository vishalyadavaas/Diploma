// question - Write a program to print the value if it is divisible by 3 or 5.

import java.util.Scanner;

class ques_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int num = sc.nextInt();

        if(num%3==0 || num%5==0){
            System.out.println("Number is found - "+num);
        }

        sc.close();
    }
}
