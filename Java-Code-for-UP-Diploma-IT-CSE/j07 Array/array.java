import java.util.Scanner;

class array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] num = new int[5];

        System.out.println("Enter the element or array : ");
        for (int i = 0; i < 5; i++) {
            num[i] = sc.nextInt();
        }

        System.out.println("Element of array are : ");
        for (int i = 0; i < 5; i++) {
            System.out.println(num[i]);
        }
        sc.close();
    }
}