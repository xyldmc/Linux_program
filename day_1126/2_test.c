/*************************************************************************
	> File Name: 2_test.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Nov 2020 04:05:57 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    char str[100];
    while (scanf("%[^\n]", str) != EOF) {
        getchar();
        printf(" has %d chars!\n", printf("%s", str)); 
    }
    return 0;
}
