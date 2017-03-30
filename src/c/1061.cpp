//
// Created by didi on 17/3/30.
//
/**
 * Problem Description
Given a positive integer N, you should output the most right digit of N^N.


Input
The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case contains a single positive integer N(1<=N<=1,000,000,000).


Output
For each test case, you should output the rightmost digit of N^N.


Sample Input
2
3
4


Sample Output
7
6

Hint

In the first case, 3 * 3 * 3 = 27, so the rightmost digit is 7.
In the second case, 4 * 4 * 4 * 4 = 256, so the rightmost digit is 6.

 //解题思路 ： 就是看个位数字是几。0 1 5 6无论几次方都是本身，其他数字有循环规律
 */
#include <stdio.h>
struct numLoop {
    int count;  //多少个数字开始循环
    int loopArr[4]; //循环的数字,最多4次循环
} loop[9];
//获取一个数的个位数
int getRightDigit( int num ) {
    return num % 10;
}
//计算循环规律
void setNumLoop()
{
    int i , j , k , sum;
    for (int i = 0; i < 10; i++) {
        sum = 1;
        int index = 0;
        loop[i].count = 0;
        sum = sum * i;
        do{
            loop[i].loopArr[loop[i].count] = sum % 10;
            if( ( sum == i || sum % 10 == i ) && loop[i].count > 0 ) {
                break;
            }
            loop[i].count += 1;
            sum = sum % 10 * i;
        }while( true );
    }
}
int main()
{
    int caseCount , num , rightDigit , i , count , index;
    scanf("%d",&caseCount);
    setNumLoop();
    for ( i = 0; i < caseCount; i++ ) {
        scanf("%d" , &num);
        rightDigit = getRightDigit( num );
        count = num % loop[rightDigit].count;
        if( count == 0 ) {
            index = loop[rightDigit].count - 1;
        } else {
            index = count - 1;
        }
        printf("%d\n", loop[rightDigit].loopArr[index]);
    }
    return 0;
}

