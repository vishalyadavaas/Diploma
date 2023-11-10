public class Main{

    void print(){
        System.out.println("Vishal");
    }
    void print(int x){
        System.out.println(x);
    }
    void print(double x){
        
        System.out.println(x);
    }
    void print(String x){
        System.out.println(x);
    }

    public static void main(String[] args) {
        Main obj = new Main();
        obj.print();
        obj.print(10);
        obj.print(10.5);
        obj.print("Vishu");
    }
}