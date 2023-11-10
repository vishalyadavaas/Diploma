public class Main {
    public static void main(String[] args) {
        try{
            int a[] = {10,20,30,40,50};
            System.out.println(a[2]);
            try{
                int x = a[2]/0;
            }
            catch(ArithmeticException e){
                System.out.println("division by zero is not possible ");
            }
        }catch(ArrayIndexOutOfBoundsException e2){
            System.out.println("Array index bound exception occurs");
        }
    }
}