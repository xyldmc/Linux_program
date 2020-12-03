/*************************************************************************
	> File Name: euler_prime.c
	> Author: 
	> Mail: 
	> Created Time: Wed 02 Dec 2020 09:14:01 AM CST
 ************************************************************************/

#include<stdio.h>
#include <string.h>
#define MAXN 100005
#define MAXL 129970

int prime[MAXN];
int tag[MAXL];

void Prime(int N) {
    memset(tag, 0, sizeof(tag));
    int cnt = 0;
    tag[0] = tag[1] = 1;
    for (int i = 2; i <= N; i++) {
        if (!tag[i]) prime[cnt++] = i;
        for (int j = 0; j < cnt && i * prime[j] <= N; j++) {
            tag[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main() {
    int n = 56;
    //scanf("%d", &n);
    Prime(n);
    for (int i = 0; i <= n; i++) {
        if (!tag[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}
