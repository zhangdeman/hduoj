//
// Created by 张德满 on 17/1/19.
//
/**
 Problem Description
lcy gives a hard puzzle to feng5166,lwg,JGShining and Ignatius: gave a and b,how to know the a^b.everybody objects to this BT problem,so lcy makes the problem easier than begin.
this puzzle describes that: gave a and b,how to know the a^b's the last digit number.But everybody is too lazy to slove this problem,so they remit to you who is wise.


Input
There are mutiple test cases. Each test cases consists of two numbers a and b(0<a,b<=2^30)


Output
For each test case, you should output the a^b's last digit number.


Sample Input
7 66
8 800


Sample Output
9
6
 */
#include <stdio.h>
int main(){
    long a , b;
    while ( scanf("%ld%ld",&a,&b) != EOF ){
        if (b == 0){
            printf("%d\n" , 1);
        } else{
            int last = a % 10;
            int end = last;
            int i = 1 , count = 1;
            do{
                end = (end * last)%10;
                if ( end == last ){
                    break;
                } else{
                    count = count + 1;
                }
            }while (1 > 0);
            int lastNum[count];
            lastNum[0] = last;
            do{
                end = (end * last)%10;
                if ( end == last ){
                    break;
                } else{
                    lastNum[i++] = end;
                }
            }while (1 > 0);

            int loop = b % count;
            loop = loop - 1 < 0 ? count - 1 : loop - 1;
            printf("%d\n" , lastNum[loop]);
        }
    }
    return 0;
}
