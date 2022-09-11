// Create classes and interfaces for circles, rectangles, shapes, and signs. 
// Write a program that illustrates the significance of interface default method.

public class Practical_4_8 {
    public static void main(String[] args) {
        shape s1 = new sign();
        shape s2 = new sign();
        s1.circle(2, "blue", "Hello");
        s2.rectangle(3, 6, "red", "World");
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}

interface shape {
    default void circle(double r, String colour, String message) {
        System.out.println("Radius of Circle:" + r + "\nArea: " + (3.14 * r * r) + "\nColor of Circle: " + colour
                + "\nMessage in sign: " + message);
    }

    default void rectangle(int l, int w, String color, String message2) {
        System.out.println(
                "\nRectangle area:" + (l * w) + "\nColor of Rectangle: " + color + "\nMessage in sign: " + message2);
    }
}

class sign implements shape {
}
