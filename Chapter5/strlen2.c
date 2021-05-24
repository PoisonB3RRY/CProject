#include <stdio.h>

int strlen2(char *);

void main()
{
    char s[10] = "hello,world!";
    printf("%d\n", strlen2(s));
}

int strlen2(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;
    return p-s;
}
