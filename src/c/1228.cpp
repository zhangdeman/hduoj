//
// Created by 张德满 on 17/1/23.
//
/**
 Problem Description
读入两个小于100的正整数A和B,计算A+B.
需要注意的是:A和B的每一位数字由对应的英文单词给出.


Input
测试输入包含若干测试用例,每个测试用例占一行,格式为"A + B =",相邻两字符串有一个空格间隔.当A和B同时为0时输入结束,相应的结果不要输出.


Output
对每个测试用例输出1行,即A+B的值.


Sample Input
one + two =
three four + five six =
zero seven + eight nine =
zero + zero =


Sample Output
3
90
96
 */
#include <stdio.h>
#include <string.h>
char map[10][6] = {
        "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"
};

int covert(char s[] ){
    int i = 0;
    for ( i = 0; i < 10; i++){
        if( strcmp( s , map[i] ) == 0 ){
            return i;
        }
    }
    return 0;
}

int main(){
    int a,b;
    char s[6];
    while(1)
    {
        for(a=0,scanf("%s",s);s[0]!='+';scanf("%s",s)){
            a=a*10+covert(s);
        }
        for(b=0,scanf("%s",s);s[0]!='=';scanf("%s",s)){
            b=b*10+covert(s);
        }
        if(a+b==0) {
            break;
        }
        printf("%d\n",a+b);
    }
    return 0;
}