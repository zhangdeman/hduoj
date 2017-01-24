//
// Created by 张德满 on 17/1/18.
//
/*
 * 大数相乘
 Problem Description
Given an integer N(0 ≤ N ≤ 10000), your task is to calculate N!


Input
One N in one line, process to the end of file.


Output
For each N, output N! in one line.


Sample Input
1
2
3


Sample Output
1
2
6
 */
#include <stdio.h>

long getResult(long n){
    if ( n > 1 ){
        return n * getResult( n - 1 );
    } else{
        return  1;
    }
}
int main(){
    long n;
    while (scanf("%ld" , &n) != EOF){
        printf("%ld\n" , getResult(n));
    }
    return 0;
}

