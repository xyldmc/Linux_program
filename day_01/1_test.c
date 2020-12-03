/*************************************************************************
	> File Name: 1_test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 24 Nov 2020 07:43:02 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char str[1000] = {0};
    int ret = 0;
    while ((ret = scanf("%[^\n]s",str)) != EOF)  {
        getchar();
        printf("has %d chars \n",printf("%s",str));

    }
    return 0;
}
