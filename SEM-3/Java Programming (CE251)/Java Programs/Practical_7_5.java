// Write a program to create three threads ‘FIRST’, ‘SECOND’, ‘THIRD’. Set
// the priority of the ‘FIRST’ thread to 3, the ‘SECOND’ thread to 5(default)
// and the ‘THIRD’ thread to 7.

public class Practical_7_5 extends Thread {

    public static void main(String[] args) {

        Practical_7_5 t1 = new Practical_7_5();
        Practical_7_5 t2 = new Practical_7_5();
        Practical_7_5 t3 = new Practical_7_5();

        System.out.println("Current Priority of Threads: ");
        System.out.println("Priority of Thread 1: " + t1.getPriority());
        System.out.println("Priority of Thread 1: " + t2.getPriority());
        System.out.println("Priority of Thread 1: " + t3.getPriority());

        System.out.println();

        t1.setPriority(3);
        t2.setPriority(5);
        t3.setPriority(7);

        System.out.println("Priorities of Threads After Setting New Priorities: ");
        System.out.println("Priority of Thread 1: " + t1.getPriority());
        System.out.println("Priority of Thread 1: " + t2.getPriority());
        System.out.println("Priority of Thread 1: " + t3.getPriority());

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

}
