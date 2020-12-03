/*************************************************************************
	> File Name: 2_test.c
	> Author: 
	> Mail: 
	> Created Time: Sat 28 Nov 2020 03:21:12 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        switch(n) {
            case 1: 
                {printf("one ");}
               // break;
            case 2:
                {printf("two ");}
               // break;
            case 3:
                {printf("three\n");}
                break;
            default:
                printf("error\n");
                break;
        }
    }
}
