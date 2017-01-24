//
// Created by 张德满 on 17/1/20.
//
/**
 Problem Description
Ignatius was born in a leap year, so he want to know when he could hold his birthday party. Can you tell him?

Given a positive integers Y which indicate the start year, and a positive integer N, your task is to tell the Nth leap year from year Y.

Note: if year Y is a leap year, then the 1st leap year is year Y.


Input
The input contains several test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow.
Each test case contains two positive integers Y and N(1<=N<=10000).


Output
For each test case, you should output the Nth leap year from year Y.


Sample Input
3
2005 25
1855 12
2004 10000


Sample Output
2108
1904
43236

Hint

We call year Y a leap year only if (Y%4==0 && Y%100!=0) or Y%400==0.
 */
#include <stdio.h>
int isLeapYear( int year ){
    if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int  n,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++ ){
        int start , num;
        scanf("%d%d",&start,&num);
        int result = 0;
        int count = 0;

        while (count < num){
            if (isLeapYear(start) == 1){
                count = count + 1;
                result = 1;
            }
            if (count < num){
                if (result == 1){
                    start = start + 4;
                } else{
                    start = start + 1;
                }
            }
        }
        printf("%d\n",start);
    }
    return 0;
}
