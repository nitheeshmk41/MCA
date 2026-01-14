package preambleWorksheet_01;

import java.util.Scanner;

public class P3_BMI {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        System.out.print("Gender (M / F) : ");
        char gender = inp.next().charAt(0);
        if(gender != 'M' && gender != 'F' ){
            System.out.print("Enter valid ! Gender (M / F) : ");
            gender = inp.next().charAt(0);
        }

        System.out.print("Enter ur weight in Kgs : ");
        double weight = inp.nextDouble();
        System.out.print("Enter ur Height in cms : ");
        double height = inp.nextDouble();

        double bmi = weight / (height * height);

        if( (bmi >= 27.8 && gender == 'M') || (bmi >= 25 && gender == 'F')){
            System.out.println("Obesee !!");
        }else{
            System.out.println("Normal");
        }
    }
}
