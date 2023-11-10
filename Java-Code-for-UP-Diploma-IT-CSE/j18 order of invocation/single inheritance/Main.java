// phale parent class ka object create hoga uske baad hi child class ka object create hoga kyuki tabhi parent class child class 
//me inherit hoga wrna nhi hoga so isiliye person constructor phale execute hua hai(kyuki parent class ka constructor hai) uske 
//baad student constructor execute hua hai(kyuki ye child class ka constrctor hai)

//-----single inheritance-----------//

class person{
    public person(){
        System.out.println("person object is created");
    }
}

class student extends person{
    public student(){
        System.out.println("student object is created");
    }
}

public class Main{
    public static void main(String[] args) {
        student s = new student();
    }
}