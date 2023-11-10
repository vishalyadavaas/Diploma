public class boxing {
    public static void main(String[] args) {

        // auto-boxing

        int num = 10;
        Integer obj = num;
        System.out.println("autoboxing : " + obj);

        // un-boxing

        Integer obj1 = 100;
        int num1 = obj1;
        System.out.println("unboxing : " + num1);
    }
}