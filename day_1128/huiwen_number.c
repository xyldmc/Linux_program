/*************************************************************************
	> File Name: huiwen_number.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Nov 2020 10:00:37 PM CST
 ************************************************************************/

#include<stdio.h>

int rev_num(int n, int base) {
    if (n < 0) return 0;
    int x = n, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", rev_num(n, 2) ? "YES" : "NO");
    int x = n, digit = 0;
    do {
        x /= 10;
        digit += 1;
    } while (x);
    printf("%d has %d digits!\n", n, digit);
    return 0;
}
