
// Assume you want to capture shapes, which can be either circles (with a radiusand a color) or rectangles (with a length, width, and color). 
// You also want to beable to create signs (to post in the campus center, 
// for example), each of whichhas a shape (for the background of the sign) and the text (a String) to put on the sign.

import java.util.Scanner;

class Practical_4_7 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        int n;

        System.out.println("Enter Your Choice\n1. Circle\n2. Rectangle\n");
        n = in.nextInt();

        switch (n) {
            case 1:
                Circle c = new Circle();
                c.get();
                c.input();
                c.output();
                break;

            case 2:
                Rectangle o = new Rectangle();
                o.get();
                o.input();
                o.output();
                break;
            default:
                System.out.println("\nInvalid Choice");
        }
        in.close();

    }
}

class signs {

    double area;
    String colour, text;

    public void get() {

        Scanner in = new Scanner(System.in);

        System.out.print("Enter Colour :");
        colour = in.nextLine();

        System.out.print("Enter Text :");
        text = in.nextLine();

        in.close();
    }
}

interface Shape {

    void input();

    void output();
}

class Circle extends signs implements Shape {

    double radius;

    public void input() {

        Scanner in = new Scanner(System.in);

        System.out.print("\nEnter Radius: ");
        radius = in.nextDouble();

        area = 3.14 * radius * radius;
        in.close();
    }

    public void output() {

        System.out.println("\nCircle");
        System.out.println("Text: " + text);
        System.out.println("Color: " + colour);
        System.out.println("Radius " + radius);
        System.out.println("Area: " + area);
    }

}

class Rectangle extends signs implements Shape {
    double length, breadth;

    public void input() {
        Scanner in = new Scanner(System.in);
        System.out.println("\nEnter Length and breadth : ");
        length = in.nextDouble();
        breadth = in.nextDouble();
        area = length * breadth;
        in.close();
    }

    public void output() {
        System.out.println("\nRectangle");
        System.out.println("TEXT: " + text);
        System.out.println("COLOUR: " + colour);
        System.out.println("Length " + length);
        System.out.println("Breadth " + breadth);
        System.out.println("Area: " + area);

    }

}