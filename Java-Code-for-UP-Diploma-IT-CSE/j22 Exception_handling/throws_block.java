import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class throws_block {
    public static void readfile() throws FileNotFoundException {
        FileInputStream input_file = new FileInputStream("abc.txt");
    }

    public static void main(String[] args) {
        System.out.println("Stating point of program");
        try{
            readfile();
        }
        catch(FileNotFoundException e){
            System.out.println(e);
        }
        
        System.out.println("Ending point of program");
    }
}
