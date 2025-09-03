public class SplitArray {
    public static void main(String[] args) {
        int[] arr = {0,1,2,3,4,5,6,7,8,9};
        int p = 3;
        for (int i = p; i < arr.length; i++) System.out.print(arr[i] + " ");
        for (int i = 0; i < p; i++) System.out.print(arr[i] + " ");
    }
}
