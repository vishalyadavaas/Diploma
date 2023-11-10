import java.util.Scanner;

class two_d_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[][] num = new int[2][3];

        System.out.println("Enter the element of 2d array : ");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                num[i][j] = sc.nextInt();
            }
        }

        System.out.println("Element of 2d array are : ");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                System.out.print(num[i][j] + "\t");
            }
            System.out.println();
        }
        sc.close();
    }
}
