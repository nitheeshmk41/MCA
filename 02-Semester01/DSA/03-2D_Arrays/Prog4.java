public class Prog4 {
    public static void main(String[] args) {
        String str = "acbac";
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'b') {
                continue; 
            }
            if (str.charAt(i) == 'a' && i + 1 < str.length() && str.charAt(i + 1) == 'c') {
                i++; 
                continue;
            }
            result.append(str.charAt(i));
        }
        System.out.println(result.toString());
    }
}
