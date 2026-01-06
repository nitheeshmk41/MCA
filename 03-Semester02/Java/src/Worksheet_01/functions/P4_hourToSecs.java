package Worksheet_01.functions;

import java.util.Scanner;

public class P4_hourToSecs {
    static int h_to_sec(int hr){
        return hr * 60 * 60;
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter hour :  ");
        int a = inp.nextInt();

        System.out.println("Hour in sec: " + h_to_sec(a));
    }
}
