import java.util.Scanner;

class nested_if_else_statement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int num = sc.nextInt();

        if(num>0){
            System.out.println("Positive Number");
            if(num%2==0){
                System.out.println("Even Number");
            }
            else{
                System.out.println("Odd Number");
            }
        }
        else{
            System.out.println("Negative Number");
        }

        sc.close();
    }
}
