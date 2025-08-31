public class Prog4 {
    public static void main(String[] args) {
        int[] arr = {1, -2, 3, 4, -5, 6, -7, 8};

        int positive = 0, negative = 0, even = 0, odd = 0;

        for (int num : arr) {
            if (num >= 0)
                positive++;
            else
                negative++;

            if (num % 2 == 0)
                even++;
            else
                odd++;
        }

        System.out.println("Positive numbers: " + positive);
        System.out.println("Negative numbers: " + negative);
        System.out.println("Even numbers: " + even);
        System.out.println("Odd numbers: " + odd);
    }
}
