//
// Created by didi on 17/3/27.
//
/**
 *
Problem Description
Given a string containing only 'A' - 'Z', we could encode it using the following method:

1. Each sub-string containing k same characters should be encoded to "kX" where "X" is the only character in this sub-string.

2. If the length of the sub-string is 1, '1' should be ignored.


Input
The first line contains an integer N (1 <= N <= 100) which indicates the number of test cases. The next N lines contain N strings. Each string consists of only 'A' - 'Z' and the length is less than 10000.


Output
For each test case, output the encoded string in a line.


Sample Input
2
ABC
ABBCCC


Sample Output
ABC
A2B3C

 */
#include <stdio.h>
#include <string.h>
struct subString {
    int count;
    char letter;
} result[10000];
int main()
{
    int caseNum , i , tmpCount = 1 , j;
    char string[10000];
    scanf("%d" , &caseNum);
    for ( i = 0; i < caseNum; i++ ) {
        scanf( "%s" , string );
        int index = 0;
        int len = strlen(string);
        for ( j = 0; j < len; j++ ) {
            if( string[j] == string[j + 1] ) {
                tmpCount += 1;
            } else {
                result[index].count = tmpCount;
                result[index].letter= string[j];
                index = index + 1;
                tmpCount = 1;
            }
        }
        for ( j = 0; j < index; j++ ) {
            if( result[j].count == 1 ) {
                printf("%c",result[j].letter);
            } else {
                printf("%d%c",result[j].count,result[j].letter);
            }
        }
        printf("\n");
    }
    return 0;
}

