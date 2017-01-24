//
// Created by 张德满 on 17/1/21.
//
/**
 Problem Description
给定两个正整数，计算这两个数的最小公倍数。


Input
输入包含多组测试数据，每组只有一行，包括两个不大于1000的正整数.


Output
对于每个测试用例，给出这两个数的最小公倍数，每个实例输出一行。


Sample Input
10 14


Sample Output
70


辗转相除法
 */
#include <stdio.h>
int getMaxSubmultiple(int num1 , int num2 ){
    int max = num1 > num2 ? num1 : num2;
    int min = num1 > num2 ? num2 : num1;
    int leave = max % min;
    if ( leave == 0 ){
        return min;
    }
    return getMaxSubmultiple( min , leave );
}
int main(){
    int num1 , num2;
    while (scanf("%d%d",&num1,&num2)!=EOF){
        printf("%d\n",num1*num2/getMaxSubmultiple(num1,num2));
    }
    return 0;
}

