class add{
    public int a = 10;
    protected int b = 20;
    int c = 30;
    private int d = 40;

    //-------accessing in same class---------//
    public void sum(){
        System.out.println("same class");
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
    }
}

// ------accessing in same sub class----------//
class sub extends add{
    public void res(){
        System.out.println("Same sub class");
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        //System.out.println(d);  // compile time error
    }
}
public class Main{
    public static void main(String[] args) {
        add obj = new add();
        obj.sum();

        //---------accessing in same package-------//
        System.out.println("same package");
        System.out.println(obj.a);
        System.out.println(obj.b);
        System.out.println(obj.c);
        //System.out.println(obj.d);  // compile time error

        sub obj1 = new sub();
        obj1.res();
    }
}
