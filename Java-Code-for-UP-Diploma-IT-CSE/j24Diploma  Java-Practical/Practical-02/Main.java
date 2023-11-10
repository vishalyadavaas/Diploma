import java.util.Scanner;

class bank {
    private String acc_no;
    protected float bal;

    bank(String x, float y) {
        acc_no = x;
        bal = y;
    }

    void show() {
        System.out.println("Account number is : " + acc_no);
        System.out.println("Balance is : " + bal);
    }
}

class account extends bank {
    account(String x, float y) {
        super(x, y);
    }

    float deposit(float amount) {
        bal = bal + amount;
        return bal;
    }

    float withdrawal(float withdrawal) {
        if (bal <= withdrawal) {
            System.out.println("Insufficient Balance !");
        } else {
            bal = bal - withdrawal;
        }
        return bal;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your account number : ");
        String a = sc.next();
        System.out.print("Enter the initiate ammount for opening account : ");
        float b = sc.nextFloat();
        account acc_obj = new account(a, b);
        while (true) {

            System.out.println("1. Deposit    2. Withdrawal    3. Exit");
            System.out.print("Enter your Choice : ");

            int Choice = sc.nextInt();
            switch (Choice) {
                case 1: {
                    System.out.print("Enter the amount for deposit : ");
                    Float des_amount = sc.nextFloat();
                    acc_obj.deposit(des_amount);
                    acc_obj.show();
                    break;
                }

                case 2: {
                    System.out.print("Enter amount for withdrawal : ");
                    Float with_amount = sc.nextFloat();
                    acc_obj.withdrawal(with_amount);
                    acc_obj.show();
                    break;
                }

                case 3: {
                    System.out.println("Exiting...");
                    System.exit(0);
                }

                default:
                    System.out.println("Invalid choice");
                    break;
            }
        }
    }
}