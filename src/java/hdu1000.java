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

public class hdu1000 {

    public static void main(String args[]){
        int a,b;
        Scanner s=new Scanner(System.in);
        while(s.hasNextInt()){
            a=s.nextInt();
            b=s.nextInt();
            System.out.println((a+b));
        }
    }
}