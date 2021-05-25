#include <stdio.h>

void strcpy4pointer(char *s, char *p)
{
    int i;

    i = 0;
    while ((*s = *p) != '\0')
    {
        s++;
        p++;
    }
}