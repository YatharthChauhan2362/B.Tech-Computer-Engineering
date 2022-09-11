// Write a program that defines TriangleArea class with three constructor. The
// first form accept no arguments. The second accept one double value for
// radius. The third form accept any two arguments

public class Practical_3_2 {

    public static void main(String[] args) {

        TriangleArea x1 = new TriangleArea();
        TriangleArea x2 = new TriangleArea(7.0);
        TriangleArea x3 = new TriangleArea(2.3f, 6.0f);

        System.out.println("Area of square: " + x1.area);
        System.out.println("Area of circle: " + x2.area);
        System.out.println("Area of traingle: " + x3.area);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}

class TriangleArea {

    double area;

    TriangleArea() {
        area = 10;
    }

    TriangleArea(double radius) {
        area = 3.14 * radius * radius;
    }

    TriangleArea(float base, float altitude) {
        area = base * altitude;
    }
}