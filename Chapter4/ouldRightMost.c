#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int gelinedif(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

/* find all line matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;
    int len;

    while (gelinedif(line, MAXLINE) > 0)
    {
        if ((len = strindex(line, pattern)) >= 0)
        {
            printf("%d", len);
        }
    }
    return found;
}

/* gelinedif: get line into s, return length */
int gelinedif(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF)
    {
        s[i++] = c;
    }
    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k, h;
    h = 0;
    int indexArray[100];

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        {
            ;
        }
        if (k > 0 && t[k] == '\0')
        {
            indexArray[h] = i;
            ++h;
        }
    }
    if (h == 0)
    {
        return -1;
    }
    return indexArray[h - 1];
}
