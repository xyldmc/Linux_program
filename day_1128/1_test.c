/*************************************************************************
	> File Name: 1_test.c
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 02:46:39 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        if (!n) {
            printf("FOOLISH\n");
        } else if (n < 60) {
            printf("FAIL\n");
        } else if (n < 75) {
            printf("MEDIUM\n");
        } else {
            printf("GOOD\n");
        }
    }
    #if 0
    scanf("%d", &n);
    if (n == 0) {
        printf("FOOLISH\n");
    } else if (n < 60 && n > 0) {
        printf("FAIL\n");
    } else if (n >= 60 && n < 75) {
        printf("MEDIUM\n");
    } else {
        printf("GOOD\n");
    }
    #endif
    return 0;
}
