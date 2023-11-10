public class try_catch {

    public static void main(String[] args) {
        try {
            int a = 5 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception occur");
            System.out.println(e);
        }

    }
}