// Code By 20DCE019 - Yatharth Chauhan

import java.util.*;

public class codechef_5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {

            int n = sc.nextInt();
            int c = sc.nextInt();
            int k = sc.nextInt();

            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int a = 0;

            for (int i = 0; i < n; i++) {
                int count = 0, s = 0;
                for (int x = i; x < n; x++) {
                    count++;
                    s = s + arr[x];
                    if (s <= c && s >= k) {
                        a = Math.max(a, count);
                    } else if (s > c) {
                        break;
                    }
                }
            }
            System.out.println(a);
        }
    }
}