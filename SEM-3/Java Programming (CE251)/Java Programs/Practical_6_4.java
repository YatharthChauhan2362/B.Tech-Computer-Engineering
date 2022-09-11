// Write a program to copy data from one file to another file.
// If the destination file does not exist, it is created automatically. 

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Practical_6_4 {
    public static void main(String[] args) throws Exception {

        try {

            FileInputStream fis = new FileInputStream("File_6_4_input.txt");
            FileOutputStream fos = new FileOutputStream("File_6_4_output.txt");

            int x;

            while ((x = fis.read()) != -1) {
                fos.write(x);
            }

            System.out.println("Data is copied Successfully");

            fis.close();
            fos.close();

        } catch (Exception e) {

            System.out.println(e);
        }
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}