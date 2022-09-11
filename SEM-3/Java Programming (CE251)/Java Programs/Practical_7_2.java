// Write a program which takes N and number of threads as an argument.
// Program should distribute the task of summation of N numbers amongst number of threads and final result to be displayed on the console.

import java.util.*;

class Mythread implements Runnable {

    int n1;
    int t1;
    int c = 0;

    int[] th1 = new int[200];

    Mythread(int n, int t, int[] th) {

        this.n1 = n;
        this.th1 = th;
        this.t1 = t;

    }

    public void run() {

        for (int i = 1; i <= t1; i++) {

            c = c + th1[i];

            System.out.println(th1[i]);
        }
        try {

            Thread.sleep(500);

        } catch (InterruptedException e) {

            System.out.println("error occured:" + e);
        }
    }
}

public class Practical_7_2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your number :");
        int n = sc.nextInt();

        System.out.println("Enter your threads number:");
        int t = sc.nextInt();

        int[] th = new int[200];
        th[1] = n / t;
        int sum = 0;

        for (int i = 1; i < t; i++) {

            th[i] = th[1];
            sum = sum + th[i];
        }

        th[t] = n - sum;

        System.out.println("The number is: ");

        Mythread b = new Mythread(n, t, th);
        Thread a = new Thread(b);
        a.start();

        try {

            a.join();

        } catch (Exception e) {

            System.out.println("Error occured :" + e);
        }
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

}