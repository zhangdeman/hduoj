/**
 * Problem Description
 I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.


 Input
 The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.


 Output
 For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.


 Sample Input
 2
 1 2
 112233445566778899 998877665544332211


 Sample Output
 Case 1:
 1 + 2 = 3

 Case 2:
 112233445566778899 + 998877665544332211 = 1111111111111111110


 */

import java.util.Scanner;

public class hdu1002 {

    public String add( String a , String b ) {
        int lenA = a.length();
        int lenB = b.length();
        int len = lenA > lenB ? lenA + 1 : lenB + 1;
        int []newA = new int[len];
        int []newB = new int[len];
        int []sum  = new int[len];
        for ( int i = 0; i < len; i++ ) {
            if( lenA - 1 - i >= 0 ) {
                char reA = a.charAt(lenA - 1 - i);
                newA[i] = Integer.parseInt(new String(reA+""));
            } else {
                newA[i] = 0;
            }
            if( lenB - 1 - i >= 0 ) {
                char reB = b.charAt(lenB - 1 - i);
                newB[i] = Integer.parseInt(new String(reB+""));
            } else {
                newB[i] = 0;
            }
        }

        int tmpSum  = 0;
        int nextAdd = 0;
        for ( int j = 0; j < len; j++ ) {
            tmpSum = newA[j] + newB[j] + nextAdd;
            if ( tmpSum >= 10 ) {
                nextAdd = 1;
                tmpSum = tmpSum - 10;
            } else {
                nextAdd = 0;
            }
            sum[len - 1 - j] = tmpSum;
        }
        String sumString = sum[0] == 0 ? "" : String.valueOf(sum[0]).charAt(0)+"";
        for ( int j = 1 ; j < len; j++ ) {
            sumString = sumString + String.valueOf(sum[j]).charAt(0);
        }
        return sumString;
    }

    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int caseCount = s.nextInt();
        String a;
        String b;
        Main instance = new Main();
        for ( int i = 0; i < caseCount; i++ ) {
            a = s.next();
            b = s.next();
            String sum = instance.add( a , b );
            System.out.print("Case ");
            System.out.print(i + 1);
            System.out.println(":");
            System.out.printf("%s + %s = %s\n" , a , b , sum);
            if( i < caseCount - 1 ) {
                System.out.printf("\n");
            }
        }
    }
}