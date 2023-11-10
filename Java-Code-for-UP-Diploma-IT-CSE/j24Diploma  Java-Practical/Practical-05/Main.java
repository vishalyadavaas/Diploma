import java.util.Scanner;

class Car {
    String model;
    int date;
    String colour;
    String speed;

    void create(String create) {
        System.out.println(create);
    }

    void soild(String soild) {
        System.out.println(soild);
    }

    void display(String display) {
        System.out.println(display);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) 
        {
            System.out.println("1. Santro Xing 2. Alto 3. Wagon R 4. Exit");
            System.out.print("Select Car : ");
            int sel = sc.nextInt();

            switch (sel) {
                case 1: {
                    // object <--------------- Santro Xing -------------------->//
                    Car Santro_Xing = new Car();
                    System.out.println("Properties of Santro_Xing Car :");
                    Santro_Xing.model = "A1A";
                    Santro_Xing.date = 2015;
                    Santro_Xing.colour = "blue";
                    Santro_Xing.speed = "50 Km";
                    System.out.println("Model : " + Santro_Xing.model);
                    System.out.println("Year of Manufacture : " + Santro_Xing.date);
                    System.out.println("Colour : " + Santro_Xing.colour);
                    System.out.println("Top_speed : " + Santro_Xing.speed);
                    System.out.println();
                    System.out.println("Functions of Santro_Xing Car :");
                    Santro_Xing.create("Santro_Xing car created");
                    Santro_Xing.soild("Santro_Xing car soild");
                    Santro_Xing.display("Santro_Xing car is displayed");
                    break;
                }
                case 2: {
                    // object <--------------- Alto -------------------->//
                    Car Alto = new Car();
                    System.out.println("Properties of Alto Car :");
                    Alto.model = "A2A";
                    Alto.date = 2000;
                    Alto.colour = "black";
                    Alto.speed = "40 Km";
                    System.out.println("Model : " + Alto.model);
                    System.out.println("Year of Manufacture : " + Alto.date);
                    System.out.println("Colour : " + Alto.colour);
                    System.out.println("Top_speed : " + Alto.speed);
                    System.out.println();
                    System.out.println("Functions of Alto Car :");
                    Alto.create("Alto car created");
                    Alto.soild("Alto car is soild");
                    Alto.display("Alto car is displayed");
                    break;
                }
                case 3:{
                    // object <--------------- Alto -------------------->//
                    Car Wagon_R = new Car();
                    System.out.println("Properties of Wagon_R Car :");
                    Wagon_R.model = "C1A";
                    Wagon_R.date = 2018;
                    Wagon_R.colour = "red";
                    Wagon_R.speed = "80 Km";
                    System.out.println("Model : " + Wagon_R.model);
                    System.out.println("Year of Manufacture : " + Wagon_R.date);
                    System.out.println("Colour : " + Wagon_R.colour);
                    System.out.println("Top_speed : " + Wagon_R.speed);
                    System.out.println();
                    System.out.println("Functions of Wagon_R Car :");
                    Wagon_R.create("Wagon_R car created");
                    Wagon_R.soild("Wagon_R car is soild");
                    Wagon_R.display("Wagon_R car is displayed");
                    break;
                }
                case 4:
                System.out.println("Exiting...");
                    System.exit(0);
                default:
                System.out.println("Invalid Select !");
                break;

            }
        }
    }
}