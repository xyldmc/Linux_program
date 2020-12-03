/*************************************************************************
	> File Name: equal2number.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Nov 2020 09:07:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 0;
    if ((a++) && (b++)) {
        printf("true!\n");
    } else {
        printf("false\n");
    }
    int n, cnt = 0;
    scanf("%d", &n);
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int val = rand() % 100;
        //if (i != 0) printf(" ");
        cnt += (val & 1);
        i && printf(" ");
        //i == 0 || printf(" ");
        printf("%d", val);
    }
    printf("\nodd has %d\n", cnt);
    return 0;
    while (~scanf("%d %d", &a, &b)) {
        /*if (a == b) {
            printf("equal!");
        } else {
            printf("not equal!");
        }*/
        printf("%s\n", a == b ? "equal!" : "not equal!");
    }
    return 0;
}
