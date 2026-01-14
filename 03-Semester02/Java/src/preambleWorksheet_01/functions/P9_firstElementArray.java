package preambleWorksheet_01.functions;

import java.util.Scanner;

public class P9_firstElementArray {
    static int firstEle(int[] arr){
        return arr[0];
    }
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter n : ");
        int n = inp.nextInt();
        System.out.print("Enter values : ");
        int[] arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = inp.nextInt();
        }

        System.out.println("First ele :  " + firstEle(arr));
    }
}
