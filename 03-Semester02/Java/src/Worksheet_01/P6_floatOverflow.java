package Worksheet_01;

public class P6_floatOverflow {
    public static void main(String[] args) {
        float x = Float.MAX_VALUE;  //3.4028235E38
        float b = Float.MIN_VALUE;  // 1.4E-45

        System.out.println(b);
        System.out.println(x + x); // => Infinity
    }
}
