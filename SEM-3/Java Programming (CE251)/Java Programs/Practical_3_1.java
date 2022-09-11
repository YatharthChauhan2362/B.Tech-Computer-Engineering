// Write a java program for converting Pound into Rupees. (Accept Pounds from
// command line argument and using scanner class also and take 1 Pound = 100
// Rupees.)

import java.util.Scanner;

public class Practical_3_1 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Pound Value: ");

        int p;
        p = sc.nextInt();

        int rs;
        rs = p * 100;

        System.out.println("Rs is: " + rs);
        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }
}