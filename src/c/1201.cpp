//
// Created by 张德满 on 17/1/23.
//
/**
 Problem Description
Gardon的18岁生日就要到了，他当然很开心，可是他突然想到一个问题，是不是每个人从出生开始，到达18岁生日时所经过的天数都是一样的呢？似乎并不全都是这样，所以他想请你帮忙计算一下他和他的几个朋友从出生到达18岁生日所经过的总天数，让他好来比较一下。


Input
一个数T，后面T行每行有一个日期，格式是YYYY-MM-DD。如我的生日是1988-03-07。


Output
T行，每行一个数，表示此人从出生到18岁生日所经过的天数。如果这个人没有18岁生日，就输出-1。


Sample Input
1
1988-03-07


Sample Output
6574

 */
#include <stdio.h>
#include <string.h>
struct {
    int year;
    int month;
    int day;
} date;
int isLeapYear( int year ){
    if ( (year%4 == 0 && year%100!=0) || year % 400 == 0 ){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int n , i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++ ){
        char currentDate[11];
        scanf("%s" , currentDate);
        date.year = ( currentDate[0] - '0' ) * 1000 + ( currentDate[1] - '0' ) * 100 + ( currentDate[2] - '0' ) * 10 + ( currentDate[3] - '0' );
        date.month = ( currentDate[5] - '0' ) * 10 + (currentDate[6] - '0');
        date.day = ( currentDate[8] - '0' ) * 10 + (currentDate[9] - '0');
        if ( date.month == 2 && date.day == 29 ){
            printf("%d\n",-1);
            continue;
        }
        int count = 0 , i;
        for ( i = 1; i < 18; i++ ){
            count = count + isLeapYear( date.year + i );
        }
        if ( date.month <= 2 ){
            count = count + isLeapYear(date.year);
        } else{
            count = count + isLeapYear( date.year + 18 );
        }
        printf("%d\n",365 * 18 + count);
    }
}