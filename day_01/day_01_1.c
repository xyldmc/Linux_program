/*************************************************************************
	> File Name: day_01_1.c
	> Author: 
	> Mail: 
	> Created Time: Tue 17 Nov 2020 08:34:57 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int a,b,c,t;
    float  count_time;
    scanf("%d %d %d %d",&a,&b,&c,&t);
    count_time = 1.0*(a*b*c - a*b*t) / (a*c + b*c -a*b);
    printf("%.2f",count_time);
    return 0;
}
