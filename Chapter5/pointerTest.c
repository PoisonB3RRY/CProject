#include <stdio.h>

void main()
{
    int x = 1;
    int y = 2;
    int z[10];

    int *ip;

    ip = &x;
    printf("ip:%d\n", *ip);

    y = *ip;
    printf("y:%d\n", y);

    *ip = 0;
    printf("*ip:%d\n", *ip);

    ip = &z[0];
    printf("ip:%d\n", *ip);
}