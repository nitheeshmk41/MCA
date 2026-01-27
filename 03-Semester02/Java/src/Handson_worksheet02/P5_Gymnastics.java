package Handson_worksheet02;

public class P5_Gymnastics {
    public static void main(String[] args) {
        int n = args.length;
        if(n < 6){
            System.out.println("Enter 6 scorces in CLI");
            return;
        }
        for(String arg : args){
            float num = Float.parseFloat(arg);
            if(num > 10 || num < 0){
                System.out.println("Invalid input (0.0 - 10.0)");
                return;
            }
        }

        float sum = 0;
        float high = -1;
        float low = 11;

        for(String arg : args){
            float num = Float.parseFloat(arg);
            if(num > high){
                high = num;
            }
            if(num < low){
                low = num;
            }
            sum += num;
        }

        System.out.println("Sum is : " +  sum);
        System.out.println("Average is : " +  sum / 6);
        System.out.println("Highest score : " +  high);
        System.out.println("Lowest Score : " +  low);
    }
}
