//
// Created by 张德满 on 17/1/19.
//
/**
 Problem Description
Your task is to Calculate a + b.
Too easy?! Of course! I specially designed the problem for acm beginners.
You must have found that some problems have the same titles with this one, yes, all these problems were designed for the same aim.


Input
The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.


Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.


Sample Input
1 5
10 20


Sample Output
6
30
 */
#include <stdio.h>
int main(){
    int a , b;
    while ( scanf("%d %d",&a , &b) != EOF ){
        printf("%d\n",a+b);
    }
    return 0;
}

