/*************************************************************************
	> File Name: 4_test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Nov 2020 08:40:06 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int i = 1;
    while (i <= 100) {
        printf("%d ", i++);
    }
    printf("\n");
    i = 1;
    do {
        printf("%d ",i++);
    } while (i <= 100);
    return 0;
}
