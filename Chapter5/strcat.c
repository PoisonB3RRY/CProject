#include <stdio.h>
#define MAXSIZE 1000 

void strcat2(char *, char *);

int main()
{
    char s[MAXSIZE] = "hello,"; 
    char t[MAXSIZE] = "lisa";
    strcat2(s,t);

    printf("%s\n", s);
}

void strcat2(char *s, char *t)
{
    for(; *s != '\0'; s++)
    {
       ; 
    }
    for(; *t != '\0'; s++, t++)
    {
        *s = *t;
    }
}
