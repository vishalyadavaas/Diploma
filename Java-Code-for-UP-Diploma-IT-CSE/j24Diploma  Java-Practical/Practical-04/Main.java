// WAP to design a string class that perform string method (equal, reverse the string, change case).

public class Main {
    String str1 = "VISHAL";
    String str2 = "Yadav";

    public void getEqual() {
        System.out.println("Equal : " + str1.equals(str2));
    }

    public void getCase() {
        System.out.println("LowerCase : " + str1.toLowerCase());
        System.out.println("UpperCase : " + str2.toUpperCase());
    }

    public static void main(String[] args) {

        Main obj = new Main();
        obj.getEqual();
        obj.getCase();

        StringBuilder sb = new StringBuilder("Vishal");
        System.out.println("Reverse : " + sb.reverse());
    }
}