//
// Created by 张德满 on 17/1/19.
//
/**
Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line.


Output
For each test case you should output the sum of N integers in one line, and with one line of output for each line in input.


Sample Input
4 1 2 3 4
5 1 2 3 4 5


Sample Output
10
15
 */
#include <stdio.h>
int main(){
    int n;
    while ( scanf("%d",&n) != EOF ){
        int a[n] , i , sum = 0;
        for ( i = 0; i < n; i++ ){
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

