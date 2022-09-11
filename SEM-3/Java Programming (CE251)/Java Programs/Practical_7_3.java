// Write a java program that implements a multi-thread application that has
// three threads. First thread generates random integer every 1 second and if
// the value is even, second thread computes the square of the number and
// prints. If the value is odd, the third thread will print the value of cube of the
// number.

import java.util.Random;
import java.lang.Thread;

public class Practical_7_3 {
    public static void main(String[] args) {

        RandomNum x = new RandomNum();
        x.start();

        System.out.println("20DCE019-Yatharth Chauhan\n");
    }
}

class RandomNum extends Thread {

    Random rand = new Random();

    int y = rand.nextInt(100);

    public void run() {

        if (y % 2 == 0) {

            Square s = new Square();
            s.start();

        } else {

            Cube c = new Cube();
            c.start();
        }
    }

    int getRandom() {
        return y;
    }
}

class Square extends Thread {

    public void run() {

        try {

            RandomNum x = new RandomNum();
            int y = x.getRandom();

            System.out.println("Square Of " + y + " is :" + (y * y));

        } catch (Exception e) {

            System.out.println("An Error Has Occured");
            e.printStackTrace();
        }
    }
}

class Cube extends Thread {

    public void run() {
        try {

            RandomNum x = new RandomNum();
            int y = x.getRandom();

            System.out.println("Cube Of " + y + " is :" + (y * y * y));

        } catch (Exception e) {

            System.out.println("An Error Has Occured");
            e.printStackTrace();
        }
    }
}