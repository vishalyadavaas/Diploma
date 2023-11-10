public class throw_block {
    public static void self_exception() {
        throw new ArithmeticException("Exception is created by user");
    }

    public static void main(String[] args) {
        System.out.println("Stating point of Program");
        try{
        self_exception();
        }
        catch(ArithmeticException e){
            System.out.println(e);
        }
        System.out.println("Ending point of Program");
    }
}
