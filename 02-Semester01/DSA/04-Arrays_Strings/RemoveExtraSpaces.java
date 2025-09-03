public class RemoveExtraSpaces {
    public static void main(String[] args) {
        String s = "You   are   interested   in programming";
        StringBuilder res = new StringBuilder();
        boolean space = false;
        for (char c: s.toCharArray()) {
            if (c==' ') {
                if (!space) res.append(c);
                space = true;
            } else {
                res.append(c);
                space = false;
            }
        }
        System.out.println(res.toString());
    }
}
