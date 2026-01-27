package Handson_worksheet02;

public class P4_WindSpeed {
    public static void main(String[] args) {
        int n = args.length;
        if(n < 1){
            System.out.println("Enter a valid input");
            return;
        }
        int num = Integer.parseInt(args[0]);
        if(num < 74){
            System.out.println("Invalid speed of wind >74");
        } else if (num < 96) {
            System.out.println("Category 1");
        }else if (num < 111) {
            System.out.println("Category 2");
        }else if (num < 131) {
            System.out.println("Category 3");
        }else if (num < 155) {
            System.out.println("Category 4");
        } else{
            System.out.println("Category 5");
        }
    }
}
