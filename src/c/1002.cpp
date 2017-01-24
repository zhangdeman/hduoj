//
// Created by 张德满 on 17/1/23.
//
/**
 Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.


Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.


Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.


Sample Input
2
1 2
112233445566778899 998877665544332211


Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
 大数A+B
 */
#include <stdio.h>
#include <string.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++){
        char a[1002] , b[1002],aa[1002],bb[1002];
        int c[1003];
        scanf("%s%s",a,b);
        long lena = strlen(a) , lenb = strlen(b);
        long len = lena > lenb ? lena : lenb;
        for (j = 0; j < len; j++){
            if (lena - 1 >= 0){
                aa[j] = a[lena - 1];
                lena = lena - 1;
            } else{
                aa[j] = '0';
            }
            if (lenb - 1 >= 0){
                bb[j] = b[lenb - 1];
                lenb = lenb - 1;
            } else{
                bb[j] = '0';
            }
        }
        int extraAdd = 0;
        for ( j = 0; j < len; j++ ){
            int addA = aa[j] - '0';
            int addB = bb[j] - '0';
            c[j] = ( addA + addB + extraAdd ) % 10;
            extraAdd = ( addA + addB + extraAdd ) / 10;
        }
        int flag = 0;
        if (extraAdd > 0){
            flag = 1;
            c[len] = extraAdd;
        }
        printf("%s %d:\n%s + %s = ", "Case" , i , a , b );
        if ( flag == 1 ){
            len = len + 1;
        }
        for ( j = len - 1; j >=0; j-- ){
            printf("%d",c[j]);
        }
        if( i == n){
            printf("\n");
        } else{
            printf("\n\n");
        }
    }
    return 0;
}


