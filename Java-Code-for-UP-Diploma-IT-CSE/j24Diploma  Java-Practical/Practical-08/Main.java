public class Main {
    public static void main(String[] args) {
        try{
        int a =5/0;
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic exception occurs");
        }
        catch(IndexOutOfBoundsException e){
            System.out.println("Index out of bound exception occurs ");
        }
        catch(Exception e){
            System.out.println("only exception occurs");
        }
        
    }
}