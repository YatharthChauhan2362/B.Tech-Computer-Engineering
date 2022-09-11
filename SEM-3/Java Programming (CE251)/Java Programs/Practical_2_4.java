// Given a string, return a string where for every char in the original, there are
// two chars.

// double_char('The') → 'TThhee'
// double_char('AAbb') → 'AAAAbbbb'
// double_char('Hi-There') → 'HHii--TThheerree'

public class Practical_2_4 {
    public static void main(String[] args) {
        String str1 = new String("The");
        String str2 = new String("AAbb");
        String str3 = new String("Hi--There");

        String str4 = new String(doublechar(str1));
        String str5 = new String(doublechar(str2));
        String str6 = new String(doublechar(str3));

        System.out.println(str4);
        System.out.println(str5);
        System.out.println(str6);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

    public static String doublechar(String str) {
        String result = "";

        for (int i = 0; i < str.length(); i++) {
            result = result + str.charAt(i) + str.charAt(i);
        }
        return result;
    }
}