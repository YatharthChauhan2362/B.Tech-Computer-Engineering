// Write a program to show use of character and byte stream.
// Also show use of BufferedReader /BufferedWriter to read console input and write them into a file. 

import java.io.*;

class Practical_6_5_B {
    public static void main(String args[]) throws Exception {
        FileWriter writer = new FileWriter("File_6_5_B.txt");
        BufferedWriter buffer = new BufferedWriter(writer);

        buffer.write("I'm Yatharth Chauhan");
        buffer.close();

        System.out.println("Successfull");
        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}