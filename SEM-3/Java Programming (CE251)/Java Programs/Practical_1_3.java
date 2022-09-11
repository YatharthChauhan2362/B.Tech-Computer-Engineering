// Write a console program to declare and initialize a double variable with some value such as 1234.5678.
// Then retrieve the integral part of the value and store it in a variable of type long, and the first four digits of the fractional part and store them in an integer of type short. 
// Display the value of the double variable by outputting the two values stored as integers.

public class Practical_1_3 {
    public static void main(String[] args) {

        double d = 1234.5678;
        long y = (long) (d);
        short s;

        System.out.println(y);

        s = (short) ((d - y) * 10000);

        System.out.println(s);
        System.out.println(y + "." + s);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}