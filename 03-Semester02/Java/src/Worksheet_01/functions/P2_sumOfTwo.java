package Worksheet_01.functions;

import java.util.Scanner;

public class P2_sumOfTwo {
    static int sumOfTwo(int a, int b){
        return a + b;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter a and b : ");
        int a = inp.nextInt();
        int b = inp.nextInt();
        System.out.println("Sum is : " + sumOfTwo(a,b));
    }
}
