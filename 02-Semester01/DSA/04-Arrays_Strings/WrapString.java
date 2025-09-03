public class WrapString {
    public static void main(String[] args) {
        String s = "ABCDEFGHIJKLIMNOQRSTUVWXYZ";
        int w = 4;
        for (int i = 0; i < s.length(); i += w) {
            System.out.println(s.substring(i, Math.min(i+w, s.length())));
        }
    }
}
