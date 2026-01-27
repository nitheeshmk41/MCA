package Handson_worksheet02;

public class P3_CompareThreeNumCLI {
    public static void main(String[] args) {
        int n = args.length;
        //System.out.println(n);
        if(n < 3){
            System.out.println("Enter a valid 3 inputs using CLI");
            return;
        }
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int c = Integer.parseInt(args[2]);

        if(a == b && b == c){
            System.out.println("All number are equal");
        } else{
            System.out.println("Not equal");
        }
    }
}
