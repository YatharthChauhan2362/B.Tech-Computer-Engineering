// Print the sum, difference and product of two complex numbers by creating a
// class named ‘Complex’ with separate methods for each operation whose real and
// imaginary parts are entered by user.

public class Practical_3_6 {

    public static void main(String[] args) {

        complex c1 = new complex(5, 3);
        c1.printcomplexnumber();

        complex c2 = new complex(4, 1);
        c2.printcomplexnumber();

        complex c3 = new complex();
        c3 = c3.addcomplex(c1, c2);

        System.out.print("\nsum is: ");
        c3.printcomplexnumber();
        c3 = c3.subcomplex(c1, c2);

        System.out.print("substraction is: ");
        c3.printcomplexnumber();
        c3 = c3.productcomplex(c1, c2);

        System.out.print("multiplication is: ");
        c3.printcomplexnumber();
        c3 = c3.dividecomplex(c1, c2);

        System.out.print("division is: ");
        c3.printcomplexnumber();

        System.out.println("\n20DCE019-Yatharth Chauhan");

    }

}

class complex {

    int real, imagenery;

    complex() {
    }

    complex(int tempReal, int imagnery) {

        real = tempReal;
        imagenery = imagnery;

    }

    void printcomplexnumber() {
        System.out.println(+real + " + " + imagenery + "i");
    }

    complex addcomplex(complex c1, complex c2) {

        complex temp = new complex();

        temp.real = c1.real + c2.real;
        temp.imagenery = c1.imagenery + c2.imagenery;
        return temp;
    }

    complex subcomplex(complex c1, complex c2) {

        complex temp = new complex();

        temp.real = c1.real - c2.real;
        temp.imagenery = c1.imagenery - c2.imagenery;

        return temp;
    }

    complex productcomplex(complex c1, complex c2) {

        complex temp = new complex();

        temp.real = c1.real * c2.real;
        temp.imagenery = c1.imagenery * c2.imagenery;

        return temp;
    }

    complex dividecomplex(complex c1, complex c2) {

        complex temp = new complex();

        temp.real = c1.real / c2.real;
        temp.imagenery = c1.imagenery / c2.imagenery;

        return temp;

    }
}