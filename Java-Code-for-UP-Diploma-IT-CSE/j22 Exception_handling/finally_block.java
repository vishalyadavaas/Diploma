public class finally_block {
    public static void main(String[] args) {
        try {
            int a[] = { 1, 2, 3 };
            System.out.println(a[2]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        } finally {
            System.out.println("Finally block executed");
        }
    }
}
