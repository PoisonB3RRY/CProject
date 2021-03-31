#include <stdio.h>
#define MAXLINE 1000

int getlines(char s[], int limt)
{
    int c;

    for (int i = 0; i < limt - 1; ++i)
    {
        if ((c = getchar()) != EOF && c != '\n')
        {
            s[i] = c;
        }
        else if (c == '\n')
        {
            s[i] = '\0';
            break;
        }
    }

    return sizeof(s);
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