package Worksheet_01.functions;

import java.util.Scanner;

public class P8_ageToDays {
    static int ageToDays(int age){
        return age * 365;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int age = inp.nextInt();

        System.out.println("Days lived : " + ageToDays(age));
    }
}
