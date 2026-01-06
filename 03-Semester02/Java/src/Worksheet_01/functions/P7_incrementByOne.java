package Worksheet_01.functions;

import java.util.Scanner;

public class P7_incrementByOne {
    static int increment(int num){
        return num +1;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        int num = inp.nextInt();
        num = increment(num);

        System.out.println(num);
    }
}
