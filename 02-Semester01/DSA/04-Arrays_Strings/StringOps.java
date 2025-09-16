import java.util.Scanner;

public class StringOps {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String s = inp.nextLine();
        int len=0;
        for(char a: s.toCharArray()) {
            len++;
        }
        System.out.println(len);

        for(int i=len-1;i>=0;i--) {
            System.out.print(s.charAt(i));
        }
        System.out.println();

        String copy="";
        for(int i=0;i<len;i++) {
            copy += s.charAt(i);
        }
        System.out.println(copy);
    }
}
