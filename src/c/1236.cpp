//
// Created by 张德满 on 17/1/23.
//
/*
Problem Description
今天的上机考试虽然有实时的Ranklist，但上面的排名只是根据完成的题数排序，没有考虑
每题的分值，所以并不是最后的排名。给定录取分数线，请你写程序找出最后通过分数线的
考生，并将他们的成绩按降序打印。


Input
测试输入包含若干场考试的信息。每场考试信息的第1行给出考生人数N ( 0 < N
< 1000 )、考题数M ( 0 < M < = 10 )、分数线（正整数）G；第2行排序给出第1题至第M题的正整数分值；以下N行，每行给出一
名考生的准考证号（长度不超过20的字符串）、该生解决的题目总数m、以及这m道题的题号
（题目号由1到M）。
当读入的考生人数为0时，输入结束，该场考试不予处理。


Output
对每场考试，首先在第1行输出不低于分数线的考生人数n，随后n行按分数从高
到低输出上线考生的考号与分数，其间用1空格分隔。若有多名考生分数相同，则按他们考
号的升序输出。


Sample Input
4 5 25
10 10 12 13 15
CS004 3 5 1 3
CS003 5 2 4 1 3 5
CS002 2 1 2
CS001 3 2 3 5
1 2 40
10 30
CS001 1 2
2 3 20
10 10 10
CS000000000000000001 0
CS000000000000000002 2 1 2
0


Sample Output
3
CS003 60
CS001 37
CS004 37
0
1
CS000000000000000002 20
 */
#include <stdio.h>
#include <string.h>
typedef struct {
    int score;
    char *number;
} student;

int main(){
    int studentNum , problemNum , score;
    while ( scanf("%d" , &studentNum) && studentNum != 0 ){
        student allAcStudent[studentNum];
        scanf("%d%d",&problemNum , &score);
        int i;
        int problemScore[problemNum];
        for ( i = 0; i < problemNum; i++ ){
            scanf("%d",&problemScore[i]);
        }
        int k = 0;
        for ( i = 0; i < studentNum; i++ ){
            char account[21];
            scanf("%s",account);
            int acNum;
            scanf("%d",&acNum);
            int ac[acNum] , j , totalScore = 0;
            for ( j = 0; j < acNum; j++ ){
                scanf("%d",&ac[j]);
                totalScore = problemScore[ac[j]] + totalScore;
            }
            if( totalScore >= score ){
                allAcStudent[k++].score = totalScore;
                allAcStudent[k++].number = account;
            }
        }
        if ( k == 0){
            printf("%d\n",0);
        } else{
            int j;
            for ( i = 0; i < k - 1; i++ ){
                for ( j = i+1; j < k; j++ ){
                    if ( allAcStudent[i].score > allAcStudent[j].score ){
                        student tmp = allAcStudent[i];
                        allAcStudent[i] = allAcStudent[j];
                        allAcStudent[j] = tmp;
                    }
                }
            }
            for ( i = 0; i < k; i++ ){
                printf("%s %d\n",allAcStudent[i].number,allAcStudent[i].score);
            }
        }
    }
    return 0;
}