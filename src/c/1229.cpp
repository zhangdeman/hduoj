//
// Created by 张德满 on 17/1/23.
//
/**
 Problem Description
读入两个小于10000的正整数A和B，计算A+B。需要注意的是：如果A和B的末尾K（不超过8）位数字相同，请直接输出-1。


Input
测试输入包含若干测试用例，每个测试用例占一行，格式为"A B K"，相邻两数字有一个空格间隔。当A和B同时为0时输入结束，相应的结果不要输出。


Output
对每个测试用例输出1行，即A+B的值或者是-1。


Sample Input
1 2 1
11 21 1
108 8 2
36 64 3
0 0 1


Sample Output
3
-1
-1
100


Source
浙大计算机研究生复试上机考试-2006年
 */
#include <stdio.h>
int main(){
    int a , b , c , sum , i;
    while (scanf("%d%d%d",&a,&b,&c)){
        if ( a == 0 && b == 0 ){
            break;
        }
        sum = a + b;
        for ( i = 0; i < c; i++ ){
            if ( a % 10 == b % 10 ){
                a = a / 10;
                b = b / 10;
            } else{
                break;
            }
        }
        if ( i == c){
            printf("%d\n" , -1);
        } else{
            printf("%d\n",sum);
        }
    }
    return 0;
}

