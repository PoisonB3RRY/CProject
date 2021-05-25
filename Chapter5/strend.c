#include <stdio.h>
#define MAXSIZE 1000

int strend(char *, char *);

int main()
{
    char s[] = "hello, lisa";
    char t[] = "lisa";
    int result = strend(s,t);
    printf("result: %d\n", result);

    return 0;
}

int strend(char *s, char *t)
{
    //push s to the end of s[]
    for(;*s == '\0'; s++)
    {
        ;
    }

    // count t[]'s length
    int lent = 0;
    for(;*t != '\0'; t++)
    {
        lent++;
    }
    s = s-lent;

    //compare s[] & t[]
    for(; *t != '\0'; s++, t++)
    {
        if(*s != *t)
        {
            return 0;
        }
    }
    return 1;
}
