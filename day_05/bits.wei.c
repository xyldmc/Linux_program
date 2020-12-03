/*************************************************************************
	> File Name: bits.wei.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Nov 2020 08:29:10 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int count = 0;
    if (x < 0) {
        x = 0 - x;
    }
    while (x > 0) {
        count += (x & 1);
        x = x >> 1;
    }
    printf("%d\n", count);
    return 0;
}
