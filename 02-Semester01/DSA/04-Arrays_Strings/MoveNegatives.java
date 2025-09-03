public class MoveNegatives {
    public static void main(String[] args) {
        int[] arr = {1,-1,3,-2,4,-5};
        int[] res = new int[arr.length];
        int idx=0;
        for (int x: arr) if (x>=0) res[idx++] = x;
        for (int x: arr) if (x<0) res[idx++] = x;
        for (int x: res) System.out.print(x+" ");
    }
}
