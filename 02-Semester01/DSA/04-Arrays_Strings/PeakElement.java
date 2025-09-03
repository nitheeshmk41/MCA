public class PeakElement {
    public static void main(String[] args) {
        int[] arr = {1,2,3,1};
        int l = 0, r = arr.length-1;
        while (l < r) {
            int mid = (l+r)/2;
            if (arr[mid] < arr[mid+1]) l = mid+1;
            else r = mid;
        }
        System.out.println("Peak index: " + l);
    }
}
