package Handson_worksheet01;

import java.util.Scanner;

public class P3_ShoppingDiscount {
    static double calcDiscount(double amt){
        if(amt < 1000){
            return 0;
        } else if (amt < 5000) {
            return amt * 0.1;
        } else if (amt < 10000) {
            return amt * 0.2;
        } else {
            return amt * 0.3;
        }
    }

    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter bill amount : ");
        double amt = inp.nextDouble();
        double discount = calcDiscount(amt);

        System.out.println("Discount : " + discount);
        System.out.println("Amt after disount : " + (amt - discount));
    }
}
