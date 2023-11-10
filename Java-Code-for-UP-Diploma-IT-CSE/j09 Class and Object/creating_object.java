public class creating_object {
    String name = "Vishal";
    int age = 17;
    public static void main(String[] args) {
        creating_object obj1 = new creating_object(); // object creating
        System.out.println(obj1.name);  // accessing of data member or variable using object
        System.out.println(obj1.age);

        creating_object obj2 = new creating_object();  // object creating
        System.out.println(obj2.name);
        System.out.println(obj2.age);
    }
}
