// Create a class named 'Member' having the following members:

// Data members
// 1 - Name
// 2 - Age
// 3 - Phone number
// 4 - Address
// 5 – Salary

// It also has a method named 'printSalary' which prints the salary of the members.

// Two classes 'Employee' and 'Manager' inherits the 'Member' class. The
// 'Employee' and 'Manager' classes have data members 'specialization' and
// 'department' respectively. Now, assign name, age, phone number, address
// and salary to an employee and a manager by making an object of both of
// these classes and print the same.

class member {

    String name, phonenum, address;
    int salary, age;

    void printSalary() {

        System.out.println("Salary :- " + salary);
    }
}

class employee extends member {

    String specialization;
}

class manager extends member {

    String department;
}

public class Practical_4_2 {
    public static void main(String args[]) {

        employee e1 = new employee();
        manager m1 = new manager();

        e1.name = "Yatharth Chauhan";
        e1.age = 19;
        e1.phonenum = "1234567899";
        e1.address = "Bharuch";
        e1.salary = 90000;
        e1.specialization = "java";

        m1.name = "Dev";
        m1.age = 19;
        m1.phonenum = "9876543211";
        m1.address = "Surat";
        m1.salary = 80000;
        m1.department = "Android Development";

        System.out.println("Employee detail:-");
        System.out.println("Name:-" + e1.name + "\nAge:-" + e1.age + "\nPhone number:-" + e1.phonenum + "\nAddress:-"
                + e1.address + "\nSpecialization:-" + e1.specialization);

        e1.printSalary();

        System.out.println();

        System.out.println("manager detail:-");
        System.out.println("Name:-" + m1.name + "\nAge:-" + m1.age + "\nPhone number:-" + m1.phonenum + "\nAddress:-"
                + m1.address + "\nDepartment:-" + m1.department);

        m1.printSalary();

        System.out.println();

        System.out.println("\n20DCE019-Yatharth Chauhan");

    }
}