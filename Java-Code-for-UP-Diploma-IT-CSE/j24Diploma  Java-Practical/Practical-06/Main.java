class Employee{
    int Emp_id;
    String Emp_name;
    String Emp_role;
    int Emp_perks;
    String Emp_company_name = "Google";
    String Emp_compant_type = "Software"; 
    Employee(int Emp_id,String Emp_name, String Emp_role,int Emp_perks){
        this.Emp_id = Emp_id;
        this.Emp_name = Emp_name;
        this.Emp_role = Emp_role;
        this.Emp_perks = Emp_perks;
        System.out.println("Id : " +Emp_id);
        System.out.println("Name : "+Emp_name);
        System.out.println("Role : "+Emp_role);
        System.out.println("Perks : "+Emp_perks);
        System.out.println("Comp_name : "+Emp_company_name);
        System.out.println("Comp_type : "+Emp_compant_type);
    } 
}

public class Main{
    public static void main(String[] args) {
        Employee SSE = new Employee(01, "A", "App developer", 100);
        System.out.println();
        Employee ML = new Employee(02, "B", "Web developer", 200);
        System.out.println();
        Employee TL = new Employee(03, "C", "ISO app developer", 400);
        System.out.println();
        Employee PL = new Employee(04, "D", "UI developer", 600);
        System.out.println();
        Employee PM = new Employee(05, "E", "Software developer", 900);
        System.out.println();
        Employee D = new Employee(06, "F", "Management of Company", 2000);
    }
}