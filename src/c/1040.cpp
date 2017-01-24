//
// Created by 张德满 on 17/1/18.
//
/*
 Problem Description
These days, I am thinking about a question, how can I get a problem as easy as A+B? It is fairly difficulty to do such a thing. Of course, I got it after many waking nights.
Give you some integers, your task is to sort these number ascending (升序).
You should know how easy the problem is now!
Good luck!


Input
Input contains multiple test cases. The first line of the input is a single integer T which is the number of test cases. T test cases follow. Each test case contains an integer N (1<=N<=1000 the number of integers to be sorted) and then N integers follow in the same line.
It is guarantied that all integers are in the range of 32-int.


Output
For each case, print the sorting result, and one line one case.


Sample Input
2
3 2 1 3
9 1 4 7 2 5 8 3 6 9


Sample Output
1 2 3
1 2 3 4 5 6 7 8 9
 */
#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int a[1000];
    int i;
    for ( i = 0; i < n; i++ ){
        int count;
        scanf( "%d" , &count );
        int j = 0;
        for ( j = 0; j < count; j++ ){
            scanf("%d" , &a[j]);
        }
        int k = 0, l = 0 , tmp;
        for ( k = 0; k < count - 1 ; k++){
            for ( j = k + 1; j < count; j++){
                if (a[k] > a[j]){
                    tmp = a[k];
                    a[k] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for ( k = 0; k < count; k++ ){
            if (k == count - 1 ){
                printf("%d\n",a[k]);
            } else{
                printf("%d ",a[k]);
            }
        }
    }
    return 0;
}