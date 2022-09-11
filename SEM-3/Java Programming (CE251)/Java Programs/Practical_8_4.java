// Write a code which counts the number of the keywords in a Java source file. 
// Store all the keywords in a HashSet and use the contains() method to test if a word is in the keyword set.

import java.util.*;
import java.io.*;

class Practical_8_4 {
    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the file name you want to scan: ");
        String f = sc.nextLine();

        File file = new File(f);
        FileReader br = new FileReader(file);
        BufferedReader fr = new BufferedReader(br);

        sc.close();

        String keywords[] = new String[] { "abstract", "assert ", "boolean", "break", "byte", "case", "catch", "char",
                "class", "continue", "default", "do", "double", "else", "enum ", "extends", "final", "finally", "float",
                "for", "if", "implements", "import", "instanceof", "int", "interface", "long", "native", "new",
                "package", "private", "protected", "public", "return", "short", "static", "strictfp", "super", "switch",
                "synchronized", "this", "throw", "throws", "transient", "try", "void", "volatile", "while" };

        HashSet<String> set = new HashSet<String>();

        for (int i = 0; i < keywords.length; ++i) {
            set.add(keywords[i]);
        }
        String st;
        int count = 0;

        while ((st = fr.readLine()) != null) {

            StringTokenizer str = new StringTokenizer(st, " +-/*%<>;:=&|!~()");

            while (str.hasMoreTokens()) {
                String swre = str.nextToken();

                if (set.contains(swre)) {
                    count++;
                }
            }
        }
        System.out.println("Total keywords are: " + count);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}
