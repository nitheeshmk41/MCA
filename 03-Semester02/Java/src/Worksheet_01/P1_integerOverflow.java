package Worksheet_01;

public class P1_integerOverflow {
    public static void main(String[] args) {
        int a = Integer.MAX_VALUE;
        long b = Long.MAX_VALUE;
        short c = Short.MAX_VALUE;

        System.out.println(++c); // 32767
        System.out.println(b);  // 9223372036854775807
        System.out.println(a);
        // Maxx
        // 2147483647
        System.out.println(++a +" "+ ++a);
        // -2147483648, -2147483647

    }
}
