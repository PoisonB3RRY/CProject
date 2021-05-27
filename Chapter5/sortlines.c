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
char *alloc(char *, int);

//readlines read input lines
int readline(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (nlines >= maxlines || p = alloc(line, len) == NULL)
        {
            return -1;
        }
        else
        {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
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

void writelines(char *lineptr[], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++)
    {
        printf("%s\n", lineptr[i]);
    }
}

//qsort: sort v[left]... v[right] into increasing order
void qsort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);

    if (left > right)
    {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i < right; i++)
    {
        if (strcmp(v[i], v[left]) < 0)
        {
            swap(v, ++last, i);
        }
    }
    swap(v, left, right);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}