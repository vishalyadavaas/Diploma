// creating thread using thread Runnable interface

public class animal implements Runnable { //implements the Runnable interface
    public void run(){  // override the run method
        System.out.println("Vishal Yadav"); // thread  task
    }
    public static void main(String[] args) {
        animal obj = new animal();  //object of class
        Thread th = new Thread(obj); // object of Thread class
        th.start(); //start the thread
    }
}