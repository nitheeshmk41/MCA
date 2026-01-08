package Handson_worksheet01;

public class P2_ATM_withdraw {
    static double bal;
    static boolean initialDeposit = false;

    static void addAmount(double amt){
        if(!initialDeposit){
            if(amt >= 1000) {
                bal += amt;
                initialDeposit = true;
            } else{
                System.out.println("Initial balance should be >1000");
            }
        }
        if(amt > 0){
            bal += amt;
            System.out.println("Amount added");
        }
    }
    static void withDraw(double amt){
        if(amt % 100 == 0){
            if(amt > 0 && amt <= bal) {
                bal -= amt;
            } else{
                System.out.println("Invalid balance");
            }
        }else{
            System.out.println("Invalid amount to withdraw only multiplies of 100");
        }
    }
    static void displayBalance(){
        System.out.println(bal);
    }
    public static void main(String[] args) {

    }
}
