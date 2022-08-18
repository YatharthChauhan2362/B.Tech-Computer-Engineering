// Code By 20DCE019 - Yatharth Chauhan

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int t, n, k;
        long[] a = new long[100000];
        long[] b = new long[100000];
        long[] min = new long[100000];
        long c = 0;

        t = in.nextInt();

        for (int i = 0; i < t; i++) {
            n = in.nextInt();
            k = in.nextInt();
            for (int j = 0; j < n; j++) {
                a[j] = in.nextInt();
            }
            for (int j = 0; j < n; j++) {
                b[j] = in.nextInt();
            }
            c = a[0] * k + b[0];
            for (int l = 1; l < n; l++) {
                min[l] = a[l] * k + b[l];
                if (c > min[l]) {
                    c = min[l];
                }
            }
            System.out.println(c);
        }
    }
}