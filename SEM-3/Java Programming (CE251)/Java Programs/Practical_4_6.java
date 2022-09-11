// Write a java that implements an interface AdvancedArithmetic which contains a method signature int divisor_sum(int n). 
// You need to write a class calledMyCalculator which implements the interface.
// divisorSum function just takes an integer as input and return the sum of all its divisors. 
// For example divisors of 6 are 1, 2, 3 and 6, so divisor_sum should return 12. 
// The value of n will be at most 1000.

import java.util.Scanner;

interface AdvancedArithmetic {

    int divisorSum(int n);
}

class MyCalculator implements AdvancedArithmetic {

    public int divisorSum(int n) {

        if (n <= 1) {

            return n;
        }

        int res = n + 1;

        for (int i = 2; i < n; i++) {

            if (n % i == 0) {

                res += i;
            }
        }
        return res;
    }
}

class Practical_4_6 {

    public static void main(String args[]) {

        int m;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer: ");

        m = sc.nextInt();

        AdvancedArithmetic a1 = new MyCalculator();

        System.out.print("Sum of divisors of " + m + " : ");
        System.out.println(a1.divisorSum(m));

        System.out.println("\n20DCE019-Yatharth Chauhan");

        sc.close();
    }
}