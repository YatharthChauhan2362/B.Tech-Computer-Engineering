import java.util.Scanner;

public class Practical_5_1 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a, b, c;
        try {

            System.out.println("Enter Integer 1:");
            a = sc.nextInt();

            System.out.println("Enter Integer 2:");
            b = sc.nextInt();

            c = a / b;

            System.out.println("Division is: " + c);
            System.out.println("\n20DCE019-Yatharth Chauhan");

        } catch (Exception e) {

            System.out.println("\nOOPS! An error occured:" + e);

            System.out.println("\n20DCE019-Yatharth Chauhan");
        }
        sc.close();

    }
}