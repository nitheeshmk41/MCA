package preambleWorksheet_01.functions;

import java.util.Scanner;

public class P5_perimeterRec {
    static double perimeter(double len, double wid){
        return 2 * (len + wid);
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter len and width : ");
        int a = inp.nextInt();
        int b = inp.nextInt();

        System.out.println("Perimeter of rec : " + perimeter(a,b));
    }
}
