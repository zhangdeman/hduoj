//
// Created by 张德满 on 17/1/19.
//
/**
Problem Description
Your task is to calculate the sum of some integers.


Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.


Output
For each group of input integers you should output their sum in one line, and you must note that there is a blank line between outputs.


Sample Input
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3


Sample Output
10

15

6


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
        if( j < n - 1 ){
            printf("%d\n\n",sum);
        }else{
            printf("%d\n",sum);
        }
    }
    return 0;
}

