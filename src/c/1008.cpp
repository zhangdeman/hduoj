//
// Created by 张德满 on 17/1/20.
//
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
 电梯运行,指定停5s。上一层 6s 下一层4s
 */
#include <stdio.h>
int main(){
    int n , i;
    while (scanf("%d",&n) && n != 0){
        int number[n] , sum = n * 5;
        for ( i = 0; i < n; i++ ){
            scanf("%d" , &number[i]);
            int num;
            if ( i == 0 ){
                num = number[0];
            } else{
                num = number[i] - number[i - 1];
            }
            if ( num > 0 ){
                sum = sum + num * 6;
            } else{
                sum = sum + (0 - num) * 4;
            }
        }
        printf("%d\n" , sum);
    }
    return 0;
}

