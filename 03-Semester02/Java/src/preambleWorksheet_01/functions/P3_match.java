package preambleWorksheet_01.functions;

import java.util.Scanner;

public class P3_match {
    static boolean equal(int a, int b){
        return a == b;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter a and b : ");
        int a = inp.nextInt();
        int b = inp.nextInt();

        System.out.println(equal(a,b));
    }
}
