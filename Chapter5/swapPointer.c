#include <stdio.h>

void swap(int *, int *);

void main()
{
    int a = 55;
    int b = 42;

    printf("original: a:%d\tb:%d\n", a, b);

    swap(&a, &b);
    printf("now:a:%d\tb:%d\n", a, b);
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}