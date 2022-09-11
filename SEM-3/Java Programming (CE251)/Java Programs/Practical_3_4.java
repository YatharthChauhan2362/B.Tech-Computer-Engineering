// Create a class called Date that includes three pieces of information as instance
// variables—a month (type int), a day (type int) and a year (type int). Your class
// should have a constructor that initializes the three instance variables and
// assumes that the values provided are correct. Provide a set and a get method for
// eachinstance variable. Provide a method displayDate that displays the month,
// day and year separated by forward slashes (/). Write a test application named
// DateTest that demonstrates class Date’s capabilities.

import java.util.Scanner;

public class Practical_3_4 {

    public static void main(String[] args) {

        date obj = new date();
        obj.set();
        obj.get();
    }
}

class date {

    int date, month, year;

    public void set() {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Day: ");
        date = sc.nextInt();
        System.out.println("Enter The Month: ");
        month = sc.nextInt();
        System.out.println("Enter The Year: ");
        year = sc.nextInt();

        sc.close();
    }

    public void get() {

        System.out.println("\nThe Date is: " + date + "/" + month + "/" + year);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}