public class Sort012 {
    public static void main(String[] args) {
        int[] arr = {0,2,1,2,0,1,0};
        int c0=0,c1=0,c2=0;
        for (int x: arr) {
            if (x==0) c0++; else if (x==1) c1++; else c2++;
        }
        for (int i=0; i<c0; i++) System.out.print("0 ");
        for (int i=0; i<c1; i++) System.out.print("1 ");
        for (int i=0; i<c2; i++) System.out.print("2 ");
    }
}
