// Write a program that will reverse the sequence of letters in each word of
// your chosen paragraph. For instance, “To be or not to be” would become
// “oT e bro ton ot eb”.

import java.util.Scanner;

public class Practical_2_5 {
    public static void main(String[] args) {

        System.out.println("Enter The String");
        Scanner sc = new Scanner(System.in);

        String S = sc.nextLine();
        String x[] = S.split("  ");
        String string_r = new String();

        for (int i = 0; i < x.length; i++) {

            StringBuffer str = new StringBuffer(x[i]);
            string_r = string_r + str.reverse();
        }

        System.out.println("\nOriginal String is: " + S);
        System.out.println("Reverse String is: " + string_r);

        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }
}