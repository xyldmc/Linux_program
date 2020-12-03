/*************************************************************************
	> File Name: 1_test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Dec 2020 06:11:25 PM CST
 ************************************************************************/

#include<stdio.h>

int fn(int n) {
    if (n == 1) {
        return 1;
    }
    return n * fn(n-1);
}

int main () {
    int x;
    //scanf("%d", &x);
    //printf("%d\n", fn(x));
    while (~scanf("%d", &x)) {
        printf("%d\n", fn(x));
    }
    return 0;
}
