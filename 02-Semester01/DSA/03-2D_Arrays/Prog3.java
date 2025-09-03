import java.util.Arrays;
import java.util.Scanner;

public class Prog3 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        System.out.print("Enter first string: ");
        String s1 = inp.nextLine();
        System.out.print("Enter second string: ");
        String s2 = inp.nextLine();

        char[] a1 = s1.toCharArray();
        char[] a2 = s2.toCharArray();
        Arrays.sort(a1);
        Arrays.sort(a2);

        if (Arrays.equals(a1, a2))
            System.out.println("Strings are Anagrams");
        else
            System.out.println("Strings are NOT Anagrams");
    }
}
