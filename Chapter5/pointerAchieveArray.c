#include <stdio.h>

int main()
{
    int a[10] = {3, 4, 5, 6, 7, 8, 9, 1, 2, 3};

    int *pa = &a[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(pa + i));
    }

    return 0;
}