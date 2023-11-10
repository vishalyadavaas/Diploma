public class thread_priority extends Thread {
    public void run(){
        System.out.println("Thread Priority : " + Thread.currentThread().getPriority());
    }
    public static void main(String[] args) {

        thread_priority t1 = new thread_priority();
        thread_priority t2 = new thread_priority();
        thread_priority t3 = new thread_priority();

        t1.setPriority(10);
        t2.setPriority(6);
        t3.setPriority(2);

        t1.start();
        t2.start();
        t3.start();
    }
}
