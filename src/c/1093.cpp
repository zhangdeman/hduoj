//
// Created by 张德满 on 17/1/19.
//
/**
Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.


Output
For each group of input integers you should output their sum in one line, and with one line of output for each line in input.


Sample Input
2
4 1 2 3 4
5 1 2 3 4 5


Sample Output
10
15
 */
#include <stdio.h>
int main(){
    int n , j , count;
    scanf( "%d" , &n );
    for ( j = 0; j < n; j++){
        scanf("%d",&count);
        int a[count] , i , sum = 0;
        for ( i = 0; i < count; i++ ){
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}

