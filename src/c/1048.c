//
// Created by didi on 17/11/11.
//
#include <stdio.h>
#include <string.h>

char *letter="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void printStr(char *str)
{
    int strLength = strlen(str);
    int index, i, printIndex;
    for (index = 0; index < strLength; index++) {
        for (i = 0; i < 26; i++) {
            if(letter[i] == str[index]) {
                printIndex = i - 5;
                if(printIndex < 0) {
                    printIndex = 26 + printIndex;
                }
                printf("%c",letter[printIndex]);
                break;
            }
        }
        if(i == 26) {
            printf("%c", str[index]);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    char input[3][201];
    while (gets(input[0])) {
        if(strcmp(input[0], "ENDOFINPUT") == 0 || strcmp(input[0], "START") != 0) {
            break;
        }
        gets(input[1]) && gets(input[2]);

        if(strcmp(input[2], "END") != 0) {
            //第三个值不是END
            break;
        }

        printStr(input[1]);

    }
    return 0;
}


