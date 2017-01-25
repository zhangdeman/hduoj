//
// Created by 张德满 on 17/1/25.
//
/**
 Problem Description
完数的定义：如果一个大于1的正整数的所有因子之和等于它的本身，则称这个数是完数，比如6，28都是完数：6=1+2+3；28=1+2+4+7+14。

本题的任务是判断两个正整数之间完数的个数。


Input
输入数据包含多行，第一行是一个正整数n，表示测试实例的个数，然后就是n个测试实例，每个实例占一行，由两个正整数num1和num2组成,(1<num1,num2<10000) 。


Output
对于每组测试数据，请输出num1和num2之间（包括num1和num2）存在的完数个数。


Sample Input
2
2 5
5 7


Sample Output
0
1

 */
#include <stdio.h>
int isFinishNumber( int num ){
    int i , sum = 1;
    int tmp = num / 2 + 1;
    for( i = 2; i < tmp; i++ ){
        if ( num % i == 0 ){
            sum = sum + i + num / i;
        }
        tmp = num / i;
    }
    if( sum == num ){
        return 1;
    }
    return 0;
}
int main(){
    int n , i , a , b , j;
    scanf("%d",&n);
    for ( i = 0; i < n; i++ ){
        scanf("%d%d",&a , &b );
        int min = a > b ? b : a;
        int max = a > b ? a : b;
        int count = 0;
        for ( j = min; j <= max; j++ ){
            if ( isFinishNumber(j) == 1 ){
                count = count + 1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
