#include <stdio.h>
#include <string.h>
#include <cstring>
int main(){
    int count; //测试用例数量
    char param1[1001] , param1_f[1001];//加数1
    char param2[1001] , param2_f[1001];//加数2
    scanf("%d" , &count);
    int c;
    for ( c = 1; c <= count; c++){
        char sum[1002];
        scanf( "%s %s" , param1 , param2);
        int len1 = strlen(param1);
        int len2 = strlen(param2);

        //两个加数对齐
        int i;
        if (len1 > len2){
            for ( i = len1; i > 0; i -- ){
                param1_f[i - 1] = param1[i - 1];
                if (len2 > 0){
                    param2_f[i - 1] = param2[len2 - 1];
                    len2 = len2 - 1;
                } else {
                    param2_f[i - 1] = '0';
                }

            }
        } else if (len1 < len2) {
            for ( i = len2; i > 0; i-- ){
                param2_f[i - 1] = param2[i - 1];
                if (len1 > 0){
                    param1_f[i - 1] = param1[len1 - 1];
                    len1 = len1 - 1;
                } else {
                    param1_f[i - 1] = '0';
                }
            }
        }

        int len = len1 > len2 ? len1 : len2;
        int  j , val_1 , val_2 , tmpSum = 0 , nextStepAdd = 0 , sumIndex = 0;
        for ( j =len ; j > 0 ; j--){
            val_1 = param1_f[j - 1]-'0';
            val_2 = param2_f[j - 1]-'0';
            tmpSum = val_1 + val_2 + nextStepAdd;
            sum[j] = tmpSum % 10;
            nextStepAdd = tmpSum / 10;
            printf("%d %d %d %d \n",val_1 , val_2 , tmpSum, tmpSum % 10);
        }
        if (nextStepAdd > 0){
            sum[0] = nextStepAdd;
        } else{
            sum[0] = 0;
        }
        printf("Case %d:\n%s + %s = ",c , param1 , param2 );
        int s;
        for ( s = 0; s <= len; s++ ){
            if( s == 0 && sum[s] == 0 ){
                continue;
            }
            printf("%d" , sum[s]);
        }
        printf("\n\n");
    }
}
//update es_company_account_97 set no_use_credit_count = no_use_credit_count + 94, use_credit_count = use_credit_count - 94  where company_id = 7731393755714163097 limit 1;