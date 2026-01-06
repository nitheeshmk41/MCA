package Worksheet_01;

import java.util.Scanner;

public class P4_Between0_1 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        System.out.print("Enter a and b : ");
        double a = inp.nextDouble();
        double b = inp.nextDouble();

        if((a >=0 && a <= 1) && (b >= 0 && b <= 1)){
            System.out.println("True");
        } else{
            System.out.println("False");
        }

    }
}
