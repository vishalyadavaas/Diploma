// creating thread using thread class
public class person extends Thread{   // extends the thread class
    public void run(){ // override the run method
        System.out.println("Vishal Yadav"); //thread task
    }
    public static void main(String[] args) {
        person obj = new person(); // object of  class
        obj.start(); //  start the thread
    }
}