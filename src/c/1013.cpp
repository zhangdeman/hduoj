//
// Created by 张德满 on 17/1/20.
//
/**
 Problem Description
The digital root of a positive integer is found by summing the digits of the integer. If the resulting value is a single digit then that digit is the digital root. If the resulting value contains two or more digits, those digits are summed and the process is repeated. This is continued as long as necessary to obtain a single digit.

For example, consider the positive integer 24. Adding the 2 and the 4 yields a value of 6. Since 6 is a single digit, 6 is the digital root of 24. Now consider the positive integer 39. Adding the 3 and the 9 yields 12. Since 12 is not a single digit, the process must be repeated. Adding the 1 and the 2 yeilds 3, a single digit and also the digital root of 39.


Input
The input file will contain a list of positive integers, one per line. The end of the input will be indicated by an integer value of zero.


Output
For each integer in the input, output its digital root on a separate line of the output.


Sample Input
24
39
0


Sample Output
6
3
一个数字,各个位数反复相加,直到和为个位数为止
 */
#include <stdio.h>
#include <string.h>
int loopAdd(int number ){
    if (number < 10){
        return number;
    }
    int sum = 0;
    while (number > 0){
        sum = sum + number % 10;
        number = number / 10;
    }
    return loopAdd(sum);
}
int main(){
    char number[10000];
    while (scanf("%s",number)){
        int len = strlen(number);
        if (len == 1 && number[0] == '0'){
            break;
        }
        int i , sum = 0;
        for ( i = 0; i < len; i++ ){
            int current = number[i] - '0';
            sum = sum + current;
        }
        printf("%d\n",loopAdd(sum));
    }
    return 0;
}

