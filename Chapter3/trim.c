#include <stdio.h>
#include <string.h>

int trim(char s[]);

int main()
{
    char s[100];
    int c, i, j;

    i = 0;
    j = 0;

    while ((c = getchar()) != EOF)
    {
        s[i] = c;
        i++;
    }

    printf("%lu\n", strlen(s));

    trim(s);

    printf("%lu\n", strlen(s));

    /*  while(s[j] != '\0')
    {
        putchar(s[j]);
        j++;
    } */
    return 0;
}

int trim(char s[])
{
    int n;

    for (n = strlen(s) - 1; n >= 0; n--)
    {
        if (s[n] != '0' && s[n] != ' ' && s[n] != '\n')
        {
            break;
        }
    }
    s[n + 1] = '\0';
    return n;
}
