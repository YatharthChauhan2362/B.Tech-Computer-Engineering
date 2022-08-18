// Code By 20DCE019 - Yatharth Chauhan

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args)
            throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int j = 0; j < n; j++) {
            int N = in.nextInt();
            int x = in.nextInt();
            int y = in.nextInt();
            int a[] = new int[N];

            for (int i = 0; i < N; i++) {
                a[i] = in.nextInt();
            }
            int count = 0;
            for (int i = 0; i < N; i++) {
                if (a[i] <= x && a[i] % y == 0) {
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}