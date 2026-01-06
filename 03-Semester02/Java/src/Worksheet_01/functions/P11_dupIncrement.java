package Worksheet_01.functions;

import java.util.Scanner;

public class P11_dupIncrement {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();

        num = P7_incrementByOne.increment(num);

        System.out.println("Num is : " + num);
    }
}
