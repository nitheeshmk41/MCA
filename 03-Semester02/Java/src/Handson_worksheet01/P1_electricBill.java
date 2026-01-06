package Handson_worksheet01;

import java.util.Scanner;

public class P1_electricBill {
    static double calcBill(double readings){
        if(readings <= 100){
            return readings * 1.5 + 75;
        } else if (readings <= 200) {
            double b = readings - 100;
            return 150 + 75 + (b*2.5);
        } else{
            double c = readings - 200;
            return 150 + 250 + 75 + (c * 4);
        }
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        System.out.print("Enter readingss : ");
        double reads = inp.nextDouble();

        System.out.println("Total bill amt is : " + calcBill(reads));
    }
}
