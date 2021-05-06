#include <stdio.h>
#define MAXLINE 1000

int gelinedif(char line[], int max);
int strindex(char source[], char searchfor[], int indexes[]);

char pattern[] = "ould";

/* find all line matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;
    int indexes[100];

    while (gelinedif(line, MAXLINE) > 0)
    {
        if (strindex(line, pattern, indexes) >= 0)
        {
            for (int w = 0; indexes[w] != NULL; w++)
            {
                printf('%d', indexes[w]);
            }
        }
    }
    return found;
}

/* gelinedif: get line into s, return length */
int gelinedif(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
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

int strindex(char s[], char t[], int indexes[])
{
    int i, j, k, h;

    h = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        {
            ;
        }
        if (k > 0 && t[k] == '\0')
        {
            indexes[h] = i;
            h++;
        }
    }
    if (indexes[0] == NULL)
    {
        return -1;
    }
    return 0;
}
