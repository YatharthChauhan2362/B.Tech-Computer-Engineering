// Write a program that counts the occurrences of words in a text and displays the words and their occurrences in alphabetical order of the words. Using Map and Set Classes.

import java.util.*;

public class Practical_8_3 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the text: ");
        String s = sc.nextLine();

        s = s.toLowerCase();

        StringTokenizer st = new StringTokenizer(s, ".,;/()! ");
        TreeSet<String> words = new TreeSet<String>();

        sc.close();

        while (st.hasMoreTokens()) {
            words.add(st.nextToken());
        }
        HashMap<String, Integer> map = new HashMap<String, Integer>();

        Iterator<String> i = words.iterator();

        while (i.hasNext()) {

            String word = i.next();
            int count = 0;

            st = new StringTokenizer(s, ".,;/()! ");

            while (st.hasMoreTokens()) {
                String swe = st.nextToken();

                if (word.equals(swe))
                    count++;
            }
            map.put(word, count);
        }
        System.out.println(map);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}
