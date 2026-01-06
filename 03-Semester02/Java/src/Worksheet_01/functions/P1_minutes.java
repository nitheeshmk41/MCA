package Worksheet_01.functions;

import java.util.Scanner;

public class P1_minutes {
    static int minToSec(int min){
        return min * 60;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter minute : ");

        int m = inp.nextInt();
        System.out.println( minToSec(m)+"secs");
    }
}
