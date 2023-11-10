//---------multilevel inheritance------------//

class animal{
    public animal(){
        System.out.println("animal object is created");
    }
}

class dog extends animal{
    public dog(){
        System.out.println("dog object is created");
    }
}

class babydog extends dog{
    public babydog(){
        System.out.println("babydog object is created");
    }
}

public class Main {
    public static void main(String[] args) {
        babydog bdog = new babydog();
    }
}
