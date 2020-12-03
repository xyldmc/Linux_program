/*************************************************************************
	> File Name: 3_test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Nov 2020 07:59:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    if (__builtin_expect(!!(x < 0), 0)) return false;
    int y = 0, z = x;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return z == y;
}

int main() {

    int x;
    bool check;
    while (~scanf("%d", &x)) {
        check = isPalindrome(x);
        printf("%d\n", check);
    }
    return 0;
}
