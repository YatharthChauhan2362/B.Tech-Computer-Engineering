// Write a program to print the area of a rectangle by creating a class named 'Area'
// taking the values of its length and breadth as parameters of its constructor and
// having a method named 'returnArea' which returns the area of the rectangle.
// Length and breadth of rectangle are entered through keyboard.

import java.util.Scanner;

public class Practical_3_5 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int l, b;

        System.out.println("Enter The Length of Rectangle: ");
        l = sc.nextInt();

        System.out.println("Enter The Breadth of Rectangle: ");
        b = sc.nextInt();

        area object = new area(l, b);

        System.out.println("\nArea of rectangle is: " + object.returnarea());

        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }
}

class area {

    int length, breadth;

    area(int l, int b) {
        length = l;
        breadth = b;
    }

    public int returnarea() {

        return length * breadth;
    }
}