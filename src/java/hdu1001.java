/**
 * Problem Description
 Calculate A + B.


 Input
 Each line will contain two integers A and B. Process to end of file.


 Output
 For each case, output A + B in one line.


 Sample Input
 1 1


 Sample Output
 2

 */

import java.util.Scanner;

public class Main {

    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int num;
        while( s.hasNextInt() ) {
            num = s.nextInt();
            int sum = 0;
            for ( int j = 0; j <= num; j++ ) {
                sum = sum + j;
            }
            System.out.println(sum);
            System.out.println();
        }
    }
}