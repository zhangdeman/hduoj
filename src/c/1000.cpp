//
// Created by 张德满 on 17/1/15.
//

/**
Problem Description
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
#include <stdio.h>
int main(){
    long val1;
    long val2;
    while (scanf( "%ld" , &val1 ) != EOF && scanf( "%ld" , &val2 ) != EOF){
        long sum = val1 + val2;
        printf("%ld\n" , sum);
    }
    return 0;
}


