// Perform following functionalities of the string:
// ● Find Length of the String
// ● Lowercase of the String
// ● Uppercase of the String
// ● Reverse String
// ● Sort the string

import java.util.Arrays;
import java.util.Scanner;

public class Practical_2_6 {
    public static void main(String[] args) {

        String str_1;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String: ");
        str_1 = sc.nextLine();

        System.out.println("\nLength of String is: " + str_1.length());
        System.out.println("Lower Case String is: " + str_1.toLowerCase());
        System.out.println("Upper Case String is: " + str_1.toUpperCase());

        StringBuilder rev = new StringBuilder();

        rev.append(str_1);
        rev.reverse();

        System.out.println("Reverse String is: " + rev);

        char[] chars = str_1.toCharArray();

        Arrays.sort(chars);

        String sorted = new String(chars);
        System.out.println("Sorted String is: " + sorted);

        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }
}