// Create a class called Employee that includes three pieces of information as
// instance variables—a first name (type String), a last name (type String) and a
// monthly salary (double). Your class should have a constructor that initializes
// the three instance variables. Provide a set and a get method for each instance
// variable. If the monthly salary is not positive, set it to 0.0. Write a test
// application named EmployeeTest that demonstrates class Employee’s
// capabilities. Create two Employee objects and display each object’s yearly
// salary. Then give each Employee a 10% raise and dis play each Employee’s
// yearly salary again

import java.util.Scanner;

public class Practical_3_3 {

    public static void main(String args[]) {

        Employee x1 = new Employee();
        x1.set();
        x1.get();
        x1.raise(10);

    }
}

class Employee {

    String first_name;
    String last_name;
    double salary;

    public void set() {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Your First Name: ");
        first_name = sc.nextLine();
        System.out.println("Enter Your Last Name: ");
        last_name = sc.nextLine();
        System.out.println("Enter Your Salary: ");
        salary = sc.nextDouble();

        if (salary < 0) {
            salary = 0.0;
        }

        sc.close();
    }

    public void get() {

        System.out.println("\nName of Employee: " + first_name + " " + last_name);
        System.out.println("Salary of Employee: " + salary);
    }

    public void raise(double percentage) {

        double Raise;

        Raise = percentage * salary;
        Raise /= 100;
        salary += Raise;

        System.out.println("Salary of Employee after Raise: " + salary);

        System.out.println("\n20DCE019-Yatharth Chauhan");

    }
}