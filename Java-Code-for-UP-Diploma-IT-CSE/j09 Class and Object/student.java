class raman{
    int rollno;
    String name;

    
}

public class student {
    public static void main(String[] args) {
        raman obj1 = new raman();
        obj1.rollno = 1;
        obj1.name = "ram";
        System.out.println(obj1.rollno);
        System.out.println(obj1.name);

        raman obj2 = new raman();
        obj2.rollno = 2;
        obj2.name = "rom";
        System.out.println(obj2.rollno);
        System.out.println(obj2.name);
    }
}
