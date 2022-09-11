// Write a program to show use of character and byte stream.
// Also show use of BufferedReader /BufferedWriter to read console input and write them into a file. 

import java.io.*;

class Practical_6_5_A {
    public static void main(String args[]) throws Exception {
        FileReader fr = new FileReader("File_6_5_A.txt");
        BufferedReader br = new BufferedReader(fr);

        int i;

        while ((i = br.read()) != -1)

        {
            System.out.print((char) i);

        }
        br.close();
        fr.close();

        System.out.println("\n\n20DCE019-Yatharth Chauhan");
    }
}