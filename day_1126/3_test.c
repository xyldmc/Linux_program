/*************************************************************************
	> File Name: 3_test.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Nov 2020 04:13:49 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    char str[1000] = {0};
    sprintf(str, "%d.%d.%d.%d", 192, 168, 1, 2);
    printf("str = %s\n", str);
    FILE *fout = fopen("output", "w");
    fprintf(stdout, "%s\n", str);
    fprintf(stderr, "%s\n", str);
    //fprintf(fout, "%s\n", str);
    return 0;
}
