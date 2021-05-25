#include <stdio.h>
#define MAXSIZE 1000

void strncpy2(char *, char *, int n);

int main()
{
    char s[MAXSIZE] = "hello,";
    char t[MAXSIZE] = "lisa motherfucker";
    strncpy2(s,t,4);
    printf("%s\n",s);
    return 0;
}

void strncpy2(char *s, char *t, int n)
{
    //push *s to the end of s[]
    for(; *s != '\0'; s++)
    {
        ;
    }
    for(int i=0; i<n ; i++)
    {
        *s = *t;
        s++;
        t++;
    }
}
