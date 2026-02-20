package Worksheet_07;

class Shirt{
    int collarSize;
    int sleeveLength;
    String material = "Cotton";
    Shirt(int c,int s){
        this.collarSize = c;
        this.sleeveLength = s;
    }
    void displayDetails(){
        System.out.println("Collar : " + this.collarSize+ ", Sleeve : " + this.sleeveLength + ", Material : " + this.material);
    }
}

public class P1_uniform_shirt {
    public static void main(String[] args) {
        Shirt S1 = new Shirt(38,30);
        Shirt S2 = new Shirt(40,32);
        Shirt S3 = new Shirt(44,34);

        S1.displayDetails();
        S2.displayDetails();
        S3.displayDetails();
    }
}
