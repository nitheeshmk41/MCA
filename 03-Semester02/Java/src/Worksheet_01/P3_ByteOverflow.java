package Worksheet_01;

public class P3_ByteOverflow {
    public static void main(String[] args) {
        byte a = Byte.MAX_VALUE; // 127
        System.out.println(++a); // 127 + 1 => -128

        byte b = Byte.MIN_VALUE; // -128

        //int a = 5.0 / 2;

        System.out.println(b);
    }
}
