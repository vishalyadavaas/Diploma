//arithmetic exception
public class arithmetic {
    public static void main(String[] args) {
        try {
            int x = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception Occur");
        }

    }
}
