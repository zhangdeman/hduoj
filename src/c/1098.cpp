//
// Created by 张德满 on 17/1/19.
//
/**
 Problem Description
Ignatius is poor at math,he falls across a puzzle problem,so he has no choice but to appeal to Eddy. this problem describes that:f(x)=5*x^13+13*x^5+k*a*x,input a nonegative integer k(k<10000),to find the minimal nonegative integer a,make the arbitrary integer x ,65|f(x)if
no exists that a,then print "no".



Input
The input contains several test cases. Each test case consists of a nonegative integer k, More details in the Sample Input.


Output
The output contains a string "no",if you can't find a,or you should output a line contains the a.More details in the Sample Output.


Sample Input
11
100
9999


Sample Output
22
no
43


 对于函数，f(x)=5*x^13+13*x^5+k*a*x，输入k，对于任意的x，是否存在一个数a，使得f（x）被65整除。

对于任意的x。所以当x = 1时，f（x） = 18 + a* k，满足被65整除。

也就是（18 + a * k）% 65 = 0。

所以，一切都很简单了。
 */
#include <stdio.h>
int main()
{
    int a,k,sum;
    while(scanf("%d",&k)!=EOF)
    {
        for(a=1;a<66;a++)
        {
            sum = 18 + a*k;
            if(sum%65 == 0)
                break;
        }
        if(a == 66)
            printf("no\n");
        else
            printf("%d\n",a);
    }
    return 0;
}


