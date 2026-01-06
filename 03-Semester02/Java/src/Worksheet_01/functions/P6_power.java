package Worksheet_01.functions;

import java.util.Scanner;

public class P6_power {
    static double calcPower(double volt, double curr){
        return volt * curr;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        double v = inp.nextDouble();
        double i = inp.nextDouble();

        System.out.println("Power p : " + calcPower(v,i));
    }
}
