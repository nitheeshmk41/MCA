package Worksheet_01;

import java.util.Scanner;

public class BeforePongal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println();
        
        System.out.print("Enter acceleration: ");
        double a = sc.nextDouble();

        System.out.print("Enter initial velocity: ");
        double vi = sc.nextDouble();

        System.out.print("Enter initial position: ");
        double xi = sc.nextDouble();

        System.out.print("Enter time: ");
        double t = sc.nextDouble();

        double position = 0.5 * a * t * t + vi * t + xi;

        System.out.println(
                "The position of the object at time " + t +
                        " seconds is: " + position + " meters"
        );
    }
}

