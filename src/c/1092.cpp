//
// Created by 张德满 on 17/1/19.
//
/**

Problem Description
Your task is to Calculate the sum of some integers.


Input
Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.


Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.


Sample Input
4 1 2 3 4
5 1 2 3 4 5
0


Sample Output
10
15
 */
#include <stdio.h>
int main(){
    int n;
    while ( scanf("%d",&n) != EOF && n > 0 ){
        int a[n] , i , sum = 0;
        for ( i = 0; i < n; i++ ){
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

