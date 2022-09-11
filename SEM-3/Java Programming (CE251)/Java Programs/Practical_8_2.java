// Create a generic method for sorting an array of Comparable objects.

import java.util.*;

public class Practical_8_2 {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(300);
        list.add(45);
        list.add(2);
        list.add(5);

        System.out.println("BEFORE SORTING:-" + list);
        Collections.sort(list);
        System.out.println("AFTER SORTING:-" + list);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}
