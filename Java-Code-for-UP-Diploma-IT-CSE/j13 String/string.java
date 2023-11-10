public class string{
    public static void main(String[] args) {
        
        //creating string
        String str = "Vishal Yadav";
        System.out.println(str);

        // creating string object
        String st = new String("hello vishal");
        System.out.println(st);

        //concatenating string
        String str1 = "Vishal";
        String str2 = "Yadav";
        System.out.println(str1+""+str2);

        // length of string
        String str3 = "java";
        System.out.println(str3.length());

        // accessing of individual characters of string
        String str4 = "hello";
        System.out.println(str4.charAt(2));

        // converting a string to uppercase or lowercase
        String str5 = "vishal";
        String str6 = "VISHAL";
        System.out.println(str5.toUpperCase());
        System.out.println(str6.toLowerCase());

        // searching for a substring
        String str7 = "Ram is a good boy";
        System.out.println(str7.indexOf("good"));
    }
}