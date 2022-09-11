// Create a class named 'Rectangle' with two data members 'length' and 'breadth'
// and two methods to print the area and perimeter of the rectangle respectively.
// Its constructor having parameters for length and breadth is used to initialize
// length and breadth of the rectangle. Let class 'Square' inherit the 'Rectangle'
// class with its constructor having a parameter for its side (suppose s) calling the
// constructor of its parent class as 'super(s,s)'. Print the area and perimeter of a
// rectangle and a square. Also use array of objects.

public class Practical_4_3 {
    public static void main(String[] args) {

        Square[] obj = { new Square(), new Square(2.0f), new Square(5.0f) };

        int i = 0;
        for (i = 0; i < 3; i++) {

            System.out.println("object" + (i + 1) + ":\n");
            obj[i].display();

        }
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}

class Rectangle {

    float lenght, breadth;

    public Rectangle() {

    }

    public Rectangle(float a, float b) {

        lenght = a;
        breadth = b;
    }
}

class Square extends Rectangle {

    float side;

    public Square() {

        super();
    }

    public Square(float a) {

        super(5, 5);
        side = 5;

    }

    public void display() {

        System.out.println("Area of rectangle:" + (lenght * breadth));
        System.out.println("Perimeter of Rectangle:" + (2 * (lenght + breadth)));
        System.out.println("Area of Square:" + (side * side));
        System.out.println("Area of square:" + (4 * side));

    }

}