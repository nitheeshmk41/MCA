package preambleWorksheet_01;

import java.util.Scanner;

public class P6_orderThreeNums {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        int b = inp.nextInt();
        int c = inp.nextInt();

        if(a < b && b < c){
            System.out.println("Increasing order");
        } else if (a > b && b > c) {
            System.out.println("Decreasing order");
        } else{
            System.out.println("Neither inc / dec !");
        }
    }
}
