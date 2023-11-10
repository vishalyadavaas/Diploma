public class student {
    private String name;
    private int age;

    student() {
        System.out.println("Default constructor");
    }

    student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    student(int age, String name) {
        this.age = age;
        this.name = name;
    }

    public static void main(String[] args) {
        student obj1 = new student();
        student obj2 = new student("Vishal",19);
        student obj3 = new student(17,"Vishal");
        System.out.println(obj2.name +" "+ obj2.age);
        System.out.println(obj3.age +" "+ obj3.name);
    }
}
