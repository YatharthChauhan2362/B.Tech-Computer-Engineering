// Write an example that counts the number of times aparticular character,such as e, appears in a file. 
// You can use xanadu.txt as the input file.

import java.io.BufferedInputStream;
import java.io.FileInputStream;

class Practical_6_2 {
    public static void main(String args[]) {
        try {
            FileInputStream fis = new FileInputStream("File_6_2.txt");
            BufferedInputStream bis = new BufferedInputStream(fis);

            int i;
            int occurs = 0;

            while ((i = bis.read()) != -1) {
                char a = (char) i;

                if (a == args[0].charAt(0)) {
                    occurs++;
                }
            }

            System.out.println("Letter e is " + occurs + " of times repeated in the file.");

            bis.close();

        } catch (Exception ex) {

            System.out.println(ex.getMessage());

        }
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}