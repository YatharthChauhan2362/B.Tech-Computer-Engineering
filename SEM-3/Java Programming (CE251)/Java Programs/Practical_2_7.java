// Perform following Functionalities of the string: “CHARUSAT University”
// ● Find length
// ● Replace ‘H’ by ‘N’
// ● Convert all character in Uppercase
// ● Extract and print “CHARUSAT” from given string

public class Practical_2_7 {

    public static void main(String[] args) {

        String str_1 = "CHARUSAT University";
        System.out.println("Length of String is: " + str_1.length());

        String r = str_1.replace("H", "N");
        System.out.println("Updated New String is (Replace H by N): " + r);

        System.out.println("Upper Case String is: " + str_1.toUpperCase());

        String str_2 = str_1.substring(0, 8);
        System.out.println("SubString is: " + str_2);

        System.out.println("\n20DCE019-Yatharth Chauhan");
    }
}