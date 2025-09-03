public class Prog2 {
    public static void main(String[] args) {
        int[][] mat = {
            {6, 4, 6, 9},
            {2, 6, 1, 8},
            {5, 5, 2, 2},
            {4, 4, 1, 3}
        };

        int m = mat.length, n = mat[0].length;
        int c1 = mat[0][0];
        int c2 = mat[0][n-1];
        int c3 = mat[m-1][0];
        int c4 = mat[m-1][n-1];

        int sum = c1 + c2 + c3 + c4;
        System.out.println("Corner elements: " + c1 + " " + c2 + " " + c3 + " " + c4);
        System.out.println("Corner_Sum = " + sum);
    }
}
