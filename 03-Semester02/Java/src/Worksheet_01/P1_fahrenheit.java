package Worksheet_01;

import java.util.Scanner;

public class P1_fahrenheit {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        double cel = inp.nextDouble();
        double fah = (9.0/5) * cel + 32;

        System.out.println("Fahrenhit is : " + fah);
    }
}
