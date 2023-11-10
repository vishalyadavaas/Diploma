import java.util.Scanner;

class area_of_rectangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the height of rectangle : ");
        int height = sc.nextInt();
        System.out.println("Enter the width of rectangle : ");
        int width = sc.nextInt();
        int area = height*width;
        System.out.println("Area of Reactangle is : "+ area);

        sc.close();
    }
}
