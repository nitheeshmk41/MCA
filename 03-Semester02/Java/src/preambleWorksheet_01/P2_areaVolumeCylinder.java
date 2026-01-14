package preambleWorksheet_01;

import java.util.Scanner;

public class P2_areaVolumeCylinder {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        float PI = 3.14f;
        System.out.print("Enter radius : ");
        double rad = inp.nextDouble();
        System.out.print("Enter length : ");
        double len = inp.nextDouble();

        double area = PI * rad * rad;
        double vol = area * len;

        System.out.printf("Area is : %.2f%n" ,  area);
        System.out.println("Volume is : "+ vol);
    }
}
