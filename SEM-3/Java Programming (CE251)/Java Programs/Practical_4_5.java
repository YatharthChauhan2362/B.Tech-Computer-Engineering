// Create a class 'Degree' having a method 'getDegree' that prints "I got a degree".
// It has two subclasses namely 'Undergraduate' and 'Postgraduate' each having a
// method with the same name that prints "I am an Undergraduate" and "I am a
// Postgraduate" respectively. Call the method by creating an object of each of the
// three classes.

class degree {

    void getDegree() {

        System.out.println("I got a degree.");
    }
}

class undergrad {

    void getDegree() {

        System.out.println("I am an Undergraduate.");
    }
}

class postgrad {

    void getDegree() {

        System.out.println("I am an Postgraduate.");
    }
}

public class Practical_4_5 {
    public static void main(String args[]) {

        degree d1 = new degree();
        undergrad u1 = new undergrad();
        postgrad p1 = new postgrad();

        d1.getDegree();
        u1.getDegree();
        p1.getDegree();

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

}