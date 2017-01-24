//
// Created by 张德满 on 17/1/22.
//
/**
 Problem Description
A number sequence is defined as follows:

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

Given A, B, and n, you are to calculate the value of f(n).


Input
The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.


Output
For each test case, print the value of f(n) on a single line.


Sample Input
1 1 3
1 2 10
0 0 0


Sample Output
2
5

 */
#include <stdio.h>
int getSum(int n , int A , int B ){
    if (n == 1 || n == 2){
        return 1;
    }
    return (getSum(n - 1 , A , B) * A + getSum( n - 2 , A , B ) * B)%7;
}
int main(){
    int a,b,c;
    while (scanf("%d%d%d",&a,&b,&c)){
        if(a==0 && b == 0 && c == 0){
            break;
        }
        c = c % 48;
        printf("%d\n",getSum(c,a,b));
    }
    return 0;
}

