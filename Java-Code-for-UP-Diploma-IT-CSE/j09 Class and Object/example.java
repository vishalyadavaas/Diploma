public class example {
    String name = "Vishal"; // creating data member or variable

    void student() { // creating methods
        for (int i = 0; i < 5; i++) {
            System.out.println(i);
        }
    }

    public static void main(String[] args) {
        example obj = new example(); // creating object of class
        System.out.println(obj.name); // accessing variable using object
        obj.student(); // accessing methods using object
    }
}
