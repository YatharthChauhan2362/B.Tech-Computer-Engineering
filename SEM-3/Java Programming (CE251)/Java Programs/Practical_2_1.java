// Given a string and a non-negative int n, we'll say that the front of the string is
// the first 3 chars, or whatever is there if the string is less than length 3. Return
// n copies of the front;

// front_times('Chocolate', 2) → 'ChoCho'
// front_times('Chocolate', 3) → 'ChoChoCho'
// front_times('Abc', 3) → 'AbcAbcAbc'

public class Practical_2_1 {
    public static void main(String[] args) {

        String res = " ", res1 = " ", res2 = " ";

        res = front_times("Chocolate", 2);
        res1 = front_times("Chocolate", 2);
        res2 = front_times("Abc", 3);

        System.out.println(res);
        System.out.println(res1);
        System.out.println(res2);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

    public static String front_times(String str, int n) {
        int fLen = 3;

        String front = str.substring(0, fLen);
        String res = " ";

        for (int i = 0; i < n; i++) {
            res = res + front;
        }
        return res;
    }
}