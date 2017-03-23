/**
 * Problem Description
 The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.

 For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.


 Input
 There are multiple test cases. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100. A test case with N = 0 denotes the end of input. This test case is not to be processed.


 Output
 Print the total time on a single line for each test case.


 Sample Input
 1 2
 3 2 3 1
 0


 Sample Output
 17
 41

 5
 */

import java.util.Scanner;

public class hdu1008 {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        Main instance = new Main();
        while( s.hasNextInt() ) {
            int caseCount = s.nextInt();
            if( caseCount == 0 ) {
                break;
            }
            int []floors  = new int[caseCount];
            //初始值，停留的总时间
            int totalTime = caseCount * 5;
            for ( int i = 0; i< caseCount; i++ ) {
                floors[i] = s.nextInt();
                //电梯移动的层数
                int num = 0;
                if ( i == 0 ) {
                    num = floors[i];
                } else {
                    num = floors[i] - floors[ i - 1 ];
                }

                if ( num > 0 ) {
                    //上升
                    totalTime = totalTime + num * 6;
                } else {
                    //下降
                    totalTime = totalTime + ( 0 - num ) * 4;
                }
            }
            System.out.println( totalTime );
        }
    }
}