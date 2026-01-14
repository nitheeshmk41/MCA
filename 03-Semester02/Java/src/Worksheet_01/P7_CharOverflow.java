package Worksheet_01;

import java.util.Scanner;

public class P7_CharOverflow {
    public static void main(String[] args) {
        char a = Character.MAX_VALUE;
        a++;
        System.out.println(a);
        Scanner ip = new Scanner(System.in);

        char txt = ip.next().charAt(0);

        System.out.println(txt);
    }
}
