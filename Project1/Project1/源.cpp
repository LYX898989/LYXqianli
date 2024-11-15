#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main() {
    char c[4];
    int i;
    for(i=0;i<3;i++)
    scanf("%c",&c[i]);
    printf("Hello, %c%c%c!\n",c[0],c[1],c[2]);
    return 0;
}