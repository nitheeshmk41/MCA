package Worksheet_07;


import javax.xml.transform.Source;
import java.util.Scanner;

class Mobile{
    String brand;
    String model;
    double price;

    Mobile(String brand,String  m,double p){
        this.brand = brand;
        this.model = m;
        this.price = p;
    }
    double getDiscountPrice(int percent) {
        return this.price - ((double) percent / 100) * this.price;
    }

    void display(){
        System.out.println(this.brand + "Price : " + this.price);
    }
}
public class P2_mobileStock {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String brand = inp.next();
        String model = inp.next();
        double price = inp.nextDouble();

        Mobile p1 = new Mobile(brand,model,price);

        double dis = p1.getDiscountPrice(10);
        System.out.println("After 10% : " +  dis);
    }
}
