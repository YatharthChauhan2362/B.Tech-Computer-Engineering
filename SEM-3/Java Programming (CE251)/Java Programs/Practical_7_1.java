// Write a program to create thread which display "Hello World" message.
// A. by extending Thread class
// B. by using Runnable interface.

public class Practical_7_1 implements Runnable {

    public void run() {

        System.out.println("20DCE019-Yatharth Chauhan");
    }

    public static void main(String args[]) {

        Practical_7_1 p = new Practical_7_1();
        Thread th = new Thread(p);
        th.start();

    }
}