// Write a program that will count the number of linesin each file that isspecified on the command line. 
// Assume that the filesare text files. Notethat multiple files can be specified, as in "javaLineCounts file1.txt file2.txtfile3.txt". 
// Write each file name, along with the numberof lines in that file,to standard output. 

import java.io.*;
import java.io.File;
import java.util.*;

public class Practical_6_1 {
    public static void main(String[] args) {

        int x;

        for (x = 0; x < args.length; x++) {

            int y = 0;

            try {

                File fileobj = new File(args[x]);

                if (fileobj.exists()) {

                    System.out.println("Searching For " + args[x] + "......");
                    System.out.println(args[x] + "Found.");
                }

                Scanner sc = new Scanner(fileobj);

                while (sc.hasNextLine()) {

                    y++;
                    sc.nextLine();
                }

                System.out.println("There Are " + y + " lines in " + fileobj.getName() + "\n");
                sc.close();

            } catch (IOException e) {

                System.out.println("An error Occured While Finding " + args[x] + "file");
            }
            // System.out.println("20DCE019-Yatharth Chauhan\n");
        }

    }
}