public class stringbuffer {
    public static void main(String[] args) {

        // creating stringbuffer object
        StringBuffer sb = new StringBuffer("hello");
        System.out.println(sb);

        // Appending characters to a stringbuffer object
        sb.append(" world");
        System.out.println(sb);

        // insertng character from a stringbuffer
        sb.insert(5, " the");
        System.out.println(sb);

        // deleting character from a stringbuffer
        sb.delete(6, 9);
        System.out.println(sb);

        // replacing character in a stringbuffer object
        sb.replace(0, 5, "vishal");
        System.out.println(sb);
    }
}
