public class s_and_non_s_variable {
    int a = 30;  // non-static variable
    static int b = 50;  // static variable
    public static void main(String[] args) {
        s_and_non_s_variable obj = new s_and_non_s_variable();
        System.out.println("non-static variable : " +obj.a); // accessing of non-static variable using object
        System.out.println("static variable : "+s_and_non_s_variable.b); // accessing of static variable using class
    }
}
