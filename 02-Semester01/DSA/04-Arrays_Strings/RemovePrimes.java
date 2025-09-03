public class RemovePrimes {
    static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return false;
        return true;
    }
    public static void main(String[] args) {
        int[] arr = {100, 200, 31, 13, 97, 10, 20, 11};
        for (int x : arr) {
            if (!isPrime(x)) {
                System.out.print(x + " ");
            };
        }
    }
}
