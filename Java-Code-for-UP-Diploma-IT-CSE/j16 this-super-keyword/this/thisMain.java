class result{
    int x;

    public result(int x){
        this.x = x;   // this refer the instance variable x
    }
}

public class thisMain {
    public static void main(String[] args) {
        result obj = new result(10);
        System.out.println(obj.x);
    }
}
