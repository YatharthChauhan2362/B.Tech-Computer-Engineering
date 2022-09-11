// Write a java program to generate user defined exception using
// "throw" and "throws" keyword.

// Also Write a java that differentiate checked and unchecked exceptions.
// (Mention at least two checked and two unchecked exception in program).

public class Practical_5_3 {

    int create_exception() throws ArithmeticException {

        int x = 10 / 0;

        return x;
    }

    public void checkAge(int age) {

        if (age < 18)
            throw new ArithmeticException("Not Eligible to Vote.");
        else
            System.out.println("Eligible for voting.");
    }

    public static void main(String[] args) {

        Practical_5_3 obj = new Practical_5_3();

        try {

            obj.create_exception();

        } catch (ArithmeticException e) {

            System.out.println("An Error has occured.");

            System.out.println("\n20DCE019-Yatharth Chauhan");
        }

        int age = 10;
        obj.checkAge(age);
    }
}