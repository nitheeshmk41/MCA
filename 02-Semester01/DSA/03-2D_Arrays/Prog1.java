import java.util.Scanner;

public class Prog1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter rows and cols: ");
        int m = sc.nextInt(), n = sc.nextInt();
        int[][] mat = new int[m][n];
        int zeroCount = 0;

        System.out.println("Enter matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = sc.nextInt();
                if (mat[i][j] == 0) zeroCount++;
            }
        }

        if (zeroCount > (m * n) / 2)
            System.out.println("The given matrix is Sparse matrix");
        else
            System.out.println("The given matrix is NOT Sparse matrix");
    }
}
