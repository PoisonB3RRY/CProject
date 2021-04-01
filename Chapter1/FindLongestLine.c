#include <stdio.h>
#define MAXLINE 1000
#include <string.h>

int getlines(char s[], int limt)
{
    int c,i;

    for (i = 0; i < limt - 1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
       s[i] = c;
    }
    if(c == '\n')
    {
            s[i]=c;
            ++i;
    }
    s[i]='\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

int main(int argc, char const *argv[])
{
    int length, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((length = getlines(line, MAXLINE)) > 0)
    {
        if (length > max)
        {
            max = length;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }

    return 0;
}
