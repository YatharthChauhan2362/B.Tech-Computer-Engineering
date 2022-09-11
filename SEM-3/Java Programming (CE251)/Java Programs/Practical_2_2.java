// Given an array of ints, return the number of 9's in the array.

// array_count9([1, 2, 9]) → 1
// array_count9([1, 9, 9]) → 2
// array_count9([1, 9, 9, 3, 9]) → 3

import java.util.Scanner;

public class Practical_2_2 {
    public static void main(String[] args) {
        System.out.println("Enter Array Elements: ");
        Scanner sc = new Scanner(System.in);

        int array[] = new int[5];

        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();
        }
        int count = array_count9(array);
        System.out.println("No. of lines in the given array is: " + count);

        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }

    public static int array_count9(int ar[]) {

        int count = 0;

        for (int i = 0; i < ar.length; i++) {
            if (ar[i] == 9) {
                count++;
            }
        }
        return count;
    }
}
