//array index out of bound exception
public class array_index {
    public static void main(String[] args) {
        try{

        
        int x[] = {4,5,9,2,7,6};
        System.out.println(x[10]);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array Index out of bound Exception");
        }
    }
}
