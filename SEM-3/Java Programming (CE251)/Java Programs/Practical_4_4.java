// Create a class named 'Shape' with a method to print "This is This is shape".
// Then create two other classes named 'Rectangle', 'Circle' inheriting the Shape
// class, both having a method to print "This is rectangular shape" and "This is
// circular shape" respectively. Create a subclass 'Square' of 'Rectangle' having a
// method to print "Square is a rectangle". Now call the method of 'Shape' and
// 'Rectangle' class by the object of 'Square' class.

class shape {

    public void print_shape() {

        System.out.println("This is a shape");
    }
}

class rectangle extends shape {

    public void print_rectangle() {

        System.out.println("This is rectangular shape");
    }
}

class circle extends shape {

    public void ciecle() {

        System.out.println("This is circular shape");
    }
}

class square extends rectangle {

    public void sqaure() {

        System.out.println("Square is a rectangle");
    }
}

public class Practical_4_4 {

    public static void main(String[] args) {

        square sq = new square();

        sq.print_shape();
        sq.print_rectangle();

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}