
public class Practical_3_7 {

    private void methodoverloaded() {

        System.out.println("private void mathodoverloaded():");
    }

    private int methodoverloaded(int i) {

        System.out.println("private int mathodoverloaded(int):");
        return 0;
    }

    private void methodoverloaded(double i) {

        System.out.println("private int mathodoverloaded(double):");

    }

    public void methodoverloaded(int i, double j) {

        System.out.println("public void mathodoverloaded(int,double):");

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }

    public static void main(String[] args) {

        Practical_3_7 s = new Practical_3_7();

        s.methodoverloaded();
        s.methodoverloaded(2);
        s.methodoverloaded(12.22);
        s.methodoverloaded(2, 22.22);
    }
}