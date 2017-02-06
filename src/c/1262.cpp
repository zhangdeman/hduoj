//
// Created by 张德满 on 17/2/6.
//
/**
 * Problem Description
哥德巴赫猜想大家都知道一点吧.我们现在不是想证明这个结论,而是想在程序语言内部能够表示的数集中,任意取出一个偶数,来寻找两个素数,使得其和等于该偶数.
做好了这件实事,就能说明这个猜想是成立的.
由于可以有不同的素数对来表示同一个偶数,所以专门要求所寻找的素数对是两个值最相近的.


Input
输入中是一些偶整数M(5<M<=10000).


Output
对于每个偶数,输出两个彼此最接近的素数,其和等于该偶数.


Sample Input
20 30 40


Sample Output
7 13
13 17
17 23

 */
#include <stdio.h>
/**
 * 判断一个数是否为素数
 * @param num
 * @return
 */
int primeNum( int num )
{
    int i , flag = 1;
    for ( i = 2; i < num / 2 + 1; i++ )
    {
        if( num % i == 0 ){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int num , tmp , i;
    while ( scanf("%d",&num) != EOF && num % 2 == 0 && num > 5 && num <= 10000 )
    {
        tmp = num / 2;
        for ( i = tmp; i >= 2; i-- ){
            if( primeNum( i ) == 1 && primeNum( num - i ) == 1 ){
                printf( "%d %d\n" , i , num - i );
                break;
            }
        }
    }
    return 0;
}
