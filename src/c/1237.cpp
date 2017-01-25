//
// Created by 张德满 on 17/1/25.
//
/**
 Problem Description
读入一个只包含 +, -, *, / 的非负整数计算表达式，计算该表达式的值。


Input
测试输入包含若干测试用例，每个测试用例占一行，每行不超过200个字符，整数和运算符之间用一个空格分隔。没有非法表达式。当一行中只有0时输入结束，相应的结果不要输出。


Output
对每个测试用例输出1行，即该表达式的值，精确到小数点后2位。


Sample Input
1 + 2
4 + 2 * 5 - 7 / 11
0


Sample Output
3.00
13.36

 */
#include <stdio.h>
int main(){
    double num;
    double result[100];
    while( scanf("%lf" , &num) ){
        if (getchar() == '\n' && num == 0){
            break;
        }
        result[0] = num;
        char op;
        int i = 0;
        while (scanf("%c%lf",&op,&num)){
            if(op == '*')
                result[i] *= num;
            else if(op == '/')
                result[i] /= num;
            else if(op == '+')
                result[++i] = num;
            else
                result[++i] = -num;
            if (getchar() == '\n'){
                break;
            }
        }
        double sum = 0;
        int j;
        for(j = i; j >= 0; j--)
            sum += result[j];
        printf("%0.2lf\n",sum);
    }
    return 0;
}

