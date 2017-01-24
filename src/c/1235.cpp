//
// Created by 张德满 on 17/1/23.
//
/**
 Problem Description
读入N名学生的成绩，将获得某一给定分数的学生人数输出。


Input
测试输入包含若干测试用例，每个测试用例的格式为


第1行：N
第2行：N名学生的成绩，相邻两数字用一个空格间隔。
第3行：给定分数

当读到N=0时输入结束。其中N不超过1000，成绩分数为（包含）0到100之间的一个整数。


Output
对每个测试用例，将获得给定分数的学生人数输出。


Sample Input
3
80 60 90
60
2
85 66
0
5
60 75 90 55 75
75
0


Sample Output
1
0
2

 */
#include <stdio.h>
int main(){
    int n , count, i , j;
    while ( scanf("%d",&n) ){
        if ( n == 0){
            break;
        }
        count = 0;
        int score[n];
        for ( i = 0; i < n; i++ ){
            scanf("%d",&score[i]);
        }
        int find;
        scanf("%d",&find);
        for ( i = 0; i < n; i++ ){
            if( find == score[i] ){
                count = count + 1;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}

