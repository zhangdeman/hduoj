//
// Created by didi on 17/11/11.
//
#include <stdio.h>
int main(int argc, char *argv[])
{
    int deep, up, down;
    while (scanf("%d", &deep) && scanf("%d", &up) && scanf("%d", &down)) {
        if(deep == 0 || up == 0) {
            break;
        }
        int current = 0;
        int time = 0;
        while (current < deep) {
            current = current + up;
            time = time + 1;
            if(current < deep) {
                current = current - down;
                time = time + 1;
            }
        }
        printf("%d\n", time);
    }
    return 0;
}