#include <stdio.h>
#include <string.h>

#define MAXLINE 5000

char *lineptr[MAXLINE];

void readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
char *alloc(char *, int);

void qsort(char *lineptr[], int left, int right);

//sort input lines
int main()
{

    return 0;
}

#define MAXLEN 1000
int getline(char *, int);

//readlines read input lines
int readline(char *lineptr, int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || p = alloc(line, len) == NULL)
        {
            /* code */
        }
    }
}

int getline(char *p, int lim)
{
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar() != EOF && c != '\n'); i++)
    {
        p[i] = c;
    }
    if (c == '\n')
    {
        p[i] = c;
        ++i;
    }
    p[i] = '\0';
    return i;
}

char *alloc(char *p, int n)
{
    char *allocp;
    allocp = p;

    if (p + MAXLEN - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    }
    else
    {
        return 0;
    }
}