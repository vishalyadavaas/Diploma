public class person {   // main class
    int age = 17;   // Data member or variable

    void add() {    // member function or methods
        int a = 10;
        int b = 10;
        int sum = a + b;
        System.out.println(sum);
    }

    public static void main(String[] args) {
        person vishal = new person();  // creating object using person class
        System.out.println(vishal.age); // accessing of data member or variable using object
        vishal.add();  // accessing of member function or methods using object

    }
}
