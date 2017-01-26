//
// Created by 张德满 on 17/1/26.
//
/**
 Problem Description
挂盐水的时候，如果滴起来有规律，先是滴一滴，停一下；然后滴二滴，停一下；再滴三滴，停一下...，现在有一个问题：这瓶盐水一共有VUL毫升，每一滴是D毫升，每一滴的速度是一秒（假设最后一滴不到D毫升，则花费的时间也算一秒），停一下的时间也是一秒这瓶水什么时候能挂完呢？


Input
输入数据包含多个测试实例，每个实例占一行，由VUL和D组成，其中 0<D<VUL<5000。


Output
对于每组测试数据，请输出挂完盐水需要的时间，每个实例的输出占一行。


Sample Input
10 1


Sample Output
13
 */
#include <stdio.h>
#include <math.h>
int main(){
    double v , d;
    while (scanf("%lf%lf",&v,&d) != EOF && v > 0 && v < 5000 && d > 0 && d < 5000){
        int times = ceil(v*1.0/d);
        int i , count = 0;
        while (1){
            v = v - (count + 1) * d;
            if ( v > 0 ){
                count = count + 1;
            } else{
                break;
            }
        }
        printf("%d\n",times + count);
    }
    return 0;
}

