//
// Created by didi on 17/3/27.
//
/**
 *

Online Judge	Online Exercise	Online Teaching	Online Contests	Exercise Author
F.A.Q
Hand In Hand
Online Acmers
Forum | Discuss
Statistical Charts
Problem Archive
Realtime Judge Status
Authors Ranklist

 Search
     C/C++/Java Exams
ACM Steps
Go to Job
Contest LiveCast
ICPC@China
Best Coder beta
VIP | STD Contests
Virtual Contests
    DIY | Web-DIY beta
Recent Contests
Author 2012083326
Mail Mail 0(0)
Control Panel Control Panel
Sign Out Sign Out
A Mathematical Curiosity

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 40347    Accepted Submission(s): 12957


Problem Description
Given two integers n and m, count the number of pairs of integers (a,b) such that 0 < a < b < n and (a^2+b^2 +m)/(ab) is an integer.

This problem contains multiple test cases!

The first line of a multiple input is an integer N, then a blank line followed by N input blocks. Each input block is in the format indicated in the problem description. There is a blank line between input blocks.

The output format consists of N output blocks. There is a blank line between output blocks.


Input
You will be given a number of cases in the input. Each case is specified by a line containing the integers n and m. The end of input is indicated by a case in which n = m = 0. You may assume that 0 < n <= 100.


Output
For each case, print the case number as well as the number of pairs (a,b) satisfying the given property. Print the output for each case on one line in the format as shown below.


Sample Input
1

10 1
20 3
30 4
0 0


Sample Output
Case 1: 2
Case 2: 4
Case 3: 5

 */
#include <stdio.h>
int main()
{
    int caseCount , n , m , i , j , k , pairsNum , count;
    scanf("%d",&caseCount);
    for ( k = 0; k < caseCount; k++ ) {
        count = 1;
        while ( scanf("%d%d",&n , &m) ) {
            if( n == 0 && m == 0 ) {
                break;
            }
            pairsNum = 0;
            for(i = 1; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if((i * i + j * j + m) % (i * j) == 0) {
                        pairsNum++;
                    }
                }
            }
            printf( "Case %d: %d\n" , count , pairsNum );
            count = count + 1;
        }
        if ( k != caseCount - 1 ) {
            printf( "\n" );
        }
    }
    return 0;
}