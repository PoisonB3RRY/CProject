#include <stdio.h>

void strcpy4array(char *s, char *p)
{
    int i;

    i = 0;
    while ((s[i] = p[i]) != '\0')
    {
        i++;
    }
}