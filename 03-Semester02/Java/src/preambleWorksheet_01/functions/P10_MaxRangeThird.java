package preambleWorksheet_01.functions;

import java.util.Scanner;

public class P10_MaxRangeThird {
    static int maxEdge(int a, int b){
        return (a+b) - 1;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter side1 and side2  (positive >= 0) :  ");
        int a = inp.nextInt();
        int b = inp.nextInt();
        if(a < 0 || b <0 ){
            System.out.println("Invalid sides");
        } else{
            System.out.println("Max third egde is : " + maxEdge(a,b));
        }


    }
}
