package Handson_worksheet02;

import java.util.Scanner;

public class P1_PrintNumberInWord {
    static void usingNestedIf(int num){
        if(num < 10){
            if(num < 5){
                if(num == 1){
                    System.out.println("One");
                } else if (num == 2) {
                    System.out.println("Two");
                } else if (num == 3) {
                    System.out.println("Three");
                } else{
                    System.out.println("Four");
                }
            } else{
                if(num == 5){
                    System.out.println("Five");
                } else if (num == 6) {
                    System.out.println("Six");
                } else if (num == 7) {
                    System.out.println("Sevenn");
                } else if (num == 8) {
                    System.out.println("Eight");
                } else{
                    System.out.println("Nine");
                }
            }
        } else{
            System.out.println("Others");
        }
    }
    static void usingSwitch(int num){
        switch (num){
            case 1 :
                System.out.println("One");
                break;
            case 2 :
                System.out.println("Two");
                break;
            case 3 :
                System.out.println("Three");
                break;
            case 4 :
                System.out.println("Four");
                break;
            case 5 :
                System.out.println("Five");
                break;
            case 6 :
                System.out.println("Six");
                break;
            case 7 :
                System.out.println("Seven");
                break;
            case 8 :
                System.out.println("Eight");
                break;
            case 9 :
                System.out.println("Nine");
                break;
            default:
                System.out.println("Others");
        }
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        System.out.print("Enter n : ");
        int n = inp.nextInt();
        System.out.println("1) Using nested if ");
        usingNestedIf(n);
        System.out.println("2) Using switch case");
        usingSwitch(n);
    }
}
