#include <stdio.h>
#include <stdlib.h>

char *fgets(char *line, int maxline, FILE *fp);
int fputs(char *line, FILE *fp);

//fgets: get at most n characters from iop
char *fgets(char *s, int n, FILE *iop)
{
    register int c;
    register char *cs;

    cs = s;
    while (--n > 0 && (c = getc(iop)) != EOF)
    {
        if ((*cs++ = c) == '\n')
        {
            break;
        }
    }
    *cs = '\0';
    return (c == EOF && *cs == '\0') ? EOF : 0;
}

//fputs: put string s on file iop
int fputs(char *s, FILE *iop)
{
    int c;

    while (c = *s++)
    {
        putc(c, iop);
    }
    return ferror(iop) ? EOF : 0;
}