#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
    char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    reverse(s);

    int i = 0;
    while (i < strlen(s))
    {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}

void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
