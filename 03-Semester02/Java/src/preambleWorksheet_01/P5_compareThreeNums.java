package preambleWorksheet_01;

import java.util.Scanner;

public class P5_compareThreeNums {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        int b = inp.nextInt();
        int c = inp.nextInt();

        if( a == b && a== c){
            System.out.println("All are equal");
        } else if (a != b && a != c && b !=c) {
            System.out.println("All are different");
        }else{
            System.out.println("Neither all are equal or different");
        }
    }
}
