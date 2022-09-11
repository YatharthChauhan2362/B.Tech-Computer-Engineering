//Write a Java Program to Search for a given word in a File. Also show use of Wrapper Class with an example. 

import java.io.*;

public class Practical_6_3 {
    public static void main(String[] args) throws Exception {

        File f = new File("File_6_3.txt");
        FileReader fr = new FileReader(f);
        BufferedReader br = new BufferedReader(fr);

        String words[] = null;
        String s = "Yatharth";
        String i;

        boolean occur = false;

        while ((i = br.readLine()) != null) {

            words = i.split(" ");

            for (String word : words) {

                if (word.equals(s)) {

                    occur = true;
                }
            }
        }
        if (occur) {

            System.out.println("The Given word is present in the file.");

        } else {

            System.out.println("The Given word is not present in the file.");

        }
        fr.close();
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}