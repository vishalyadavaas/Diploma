class variable_types {

    static int b = 20; // static variable
    int c = 30; // instance variable

    public static void main(String[] args) {
        int a = 10; // local variable
        System.out.println(a);
        System.out.println(variable_types.b);

        variable_types obj = new variable_types();
        System.out.println(obj.c);
    }
}
