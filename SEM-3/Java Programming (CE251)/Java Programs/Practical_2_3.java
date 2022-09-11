// Given an array of ints, return the number of 9's in the array.

// array_count9([1, 2, 9]) → 1
// array_count9([1, 9, 9]) → 2
// array_count9([1, 9, 9, 3, 9]) → 3

import java.util.Scanner;

public class Practical_2_3 {
    public static void main(String[] args) {

        System.out.println("Enter Array Elements: ");
        Scanner sc = new Scanner(System.in);

        int array[] = new int[5];

        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();
        }
        boolean count = array_count9(array, array.length);

        System.out.println("count is: " + count);
        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }

    public static boolean array_count9(int ar[], int n) {

        boolean count = false;
        if (n > 4) {

            n = 4;

            for (int i = 0; i < 4; i++) {
                if (ar[i] == 9) {
                    count = true;
                }
            }
        }
        return count;
    }
}