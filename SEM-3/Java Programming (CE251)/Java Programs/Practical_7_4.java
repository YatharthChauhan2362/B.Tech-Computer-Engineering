// Write a program to increment the value of one variable by one and
// display it after one second using thread using sleep() method.

import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.Scanner;

public class Practical_7_4 extends Thread {

    public void run() {
        int x;

        System.out.println("Enter a variable: ");

        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        sc.close();

        x++;

        try {

            Thread.sleep(1000);

        } catch (InterruptedException ex) {

            Logger.getLogger(Practical_7_4.class.getName()).log(Level.SEVERE, null, ex);
        }

        System.out.println("Value of variableis : " + x);
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

    public static void main(String[] args) {

        Practical_7_4 t = new Practical_7_4();
        t.start();
    }
}