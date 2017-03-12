/**
 * Problem Description
 A number sequence is defined as follows:

 f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

 Given A, B, and n, you are to calculate the value of f(n).


 Input
 The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.


 Output
 For each test case, print the value of f(n) on a single line.


 Sample Input
 1 1 3
 1 2 10
 0 0 0


 Sample Output
 2
 5
 */

import java.util.Scanner;

public class hdu1005 {

    public int recursion( int num , int mod , int coefficient1 , int coefficient2 ) {
        if ( num == 1 || num == 2 ) {
            return 1;
        }
        //mod 7  最后得到的结果只能是 0  1 2 3 4 5 6 周期49
        int f[] = new int[50];
        for (int i = 1; i < 50; i++) {
            if (i == 1 || i == 2) {
                f[i] = 1;
            } else {
                f[i] = (coefficient1 * f[i - 1] + coefficient2 * f[i - 2]) % mod;
            }
        }
        return f[num % 49];
    }

    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        Main instance = new Main();
        while( s.hasNextInt() ) {
            int a = s.nextInt();
            int b = s.nextInt();
            int c = s.nextInt();
            if ( a == 0 && b == 0 && c == 0 ) {
                break;
            }
            int result = instance.recursion( c , 7 , a , b );
            System.out.println(result);
        }
    }
}