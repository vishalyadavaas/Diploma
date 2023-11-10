public class s_and_non_s_method {
    int a = 10;  // non-static variable
    static int b = 20; // static variable

    
    public static void main(String[] args) {
        s_and_non_s_method obj = new s_and_non_s_method();
        obj.add();  // non-static method calling using object
        sub(); // static method calling without object or class
    }
    void add(){  // non-static method
        System.out.println("non-static method");
        System.out.println(a);
        System.out.println(b);
    }
    static void sub(){ // static method
        System.out.println("static method");
        System.out.println(b);
    }
}
