//
// Created by 张德满 on 17/1/15.
//
/**
 Problem Description
Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).

In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.


Input
The input will consist of a series of integers n, one integer per line.


Output
For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.


Sample Input
1
100


Sample Output
1

5050


Author
DOOM III


Recommend
We have carefully selected several similar problems for you:  1002 1090 1003 1091 1004
 */
#include <stdio.h>
//递归求和
int getSum( int endNum ){
    if ( endNum > 1 ){
        return endNum + getSum( endNum - 1 );
    } else{
        return 1;
    }
}
int main(){
    char ch;
    long val1;
    long len;
    scanf("%ld" , &val1);
    do{
        long sum = getSum( val1 );
        printf("%ld\n\n",sum);
    }while ( scanf("%ld" , &val1) != EOF );
    return 0;
}


