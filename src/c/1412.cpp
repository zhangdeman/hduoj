//
// Created by 张德满 on 17/1/25.
//
/**
 Problem Description
给你两个集合，要求{A} + {B}.
注:同一个集合中不会有两个相同的元素.


Input
每组输入数据分为三行,第一行有两个数字n,m(0<n,m<=10000),分别表示集合A和集合B的元素个数.后两行分别表示集合A和集合B.每个元素为不超出int范围的整数,每个元素之间有一个空格隔开.


Output
针对每组数据输出一行数据,表示合并后的集合,要求从小到大输出,每个元素之间有一个空格隔开.


Sample Input
1 2
1
2 3
1 2
1
1 2


Sample Output
1 2 3
1 2
 */
#include <stdio.h>
int main(){
    int m , n;
    while (scanf("%d%d",&m,&n) != EOF && m > 0 && n > 0 && m <= 10000 && n <= 10000){
        int a[m] , b[n] , c[m+n] , i , j , k;
        for ( i = 0; i < m; i++ ){
            scanf("%d",&a[i]);
            c[i] = a[i];
        }

        for ( j = 0; j < n; j++ ){
            scanf("%d",&b[j]);
            int flag = 0;
            for ( k = 0; k < m; k++){
                if( b[j] == a[k] ){
                    flag = 1;
                    break;
                }
            }
            if ( flag == 0 ){
                c[i++] = b[j];
            }
        }

        int s , t , tmp;
        for ( t = 0; t < i - 1; t++ ){
            for (s = t + 1;s < i; s++){
                if( c[t] > c[s] ){
                    tmp = c[t];
                    c[t] = c[s];
                    c[s] = tmp;
                }
            }
        }

        for ( j = 0; j < i; j++ ){
            if ( j < i - 1 ){
                printf( "%d ", c[j] );
            } else{
                printf( "%d\n", c[j] );
            }
        }

    }
    return 0;
}

