public class MyThread implements Runnable {
    public void run() {
        // Code to be executed in the thread
        System.out.println("Thread is running");
    }

    public static void main(String[] args) {
        // Create an instance of the MyThread class
        MyThread myThread = new MyThread();

        // Create a Thread object and pass the instance of MyThread
        Thread thread = new Thread(myThread);

        // Start the thread
        thread.start();
    }
}
