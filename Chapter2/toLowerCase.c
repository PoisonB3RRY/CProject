#include <stdio.h>

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 'a' - 'A';
    }
    else
    {
        return c;
    }
}

int main()
{
    int c, lc, i;
    int cArray[100];

    i = 0;

    while ((c = getchar()) != EOF)
    {
        lc = lower(c);
        cArray[i] = lc;
        i++;
    }
    printf("\n");
    for (int j = 0; j < i; ++j)
    {
        putchar(cArray[j]);
    }
}