//
// Created by 张德满 on 17/1/26.
//
/**
 Problem Description
大家提到LTC都佩服的不行，不过，如果竞赛只有这一个题目，我敢保证你和他绝对在一个水平线上！
你的任务是：
计算方程x^2+y^2+z^2= num的一个正整数解。


Input
输入数据包含多个测试实例，每个实例占一行，仅仅包含一个小于等于10000的正整数num。


Output
对于每组测试数据，请按照x,y,z递增的顺序输出它的一个最小正整数解，每个实例的输出占一行，题目保证所有测试数据都有解。


Sample Input
3


Sample Output
1 1 1

 */
#include <stdio.h>
int main(){
    int num;
    while ( scanf("%d",&num) != EOF && num >= 0 && num <= 10000 ){
        int x , y , z , flag = 0;
        for ( x = 1; x <= 100; x++ ){
            for ( y = x; y <= 100; y++ ){
                for ( z = y; z <= 100; z++ ){
                    if ( x * x + y * y + z * z == num ){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1){
                    break;
                }
            }
            if ( flag == 1 ){
                break;
            }
        }
        if ( flag == 1 ){
            printf("%d %d %d\n",x , y , z);
        }
    }
    return 0;
}
