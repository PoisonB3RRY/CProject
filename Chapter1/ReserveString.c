#include <stdio.h>
#include <string.h>

#define MAXLONG 1000

void reserveString(char origin[], char target[])
{

    int length = strlen(origin);
    for (int i = 0; i < length - 1; ++i)
    {
        target[i] = origin[length - i - 1];
    }
}

int main(int argc, char const *argv[])
{
    int c, i;

    char origin[MAXLONG];
    char target[MAXLONG];

    i = 0;

    while ((c = getchar()) != EOF && c != '\n')
    {
        origin[i] = c;
        ++i;
    }

    reserveString(origin, target);
    int len = strlen(target);
    for (int i = 0; i < len - 1; ++i)
    {
        putchar(target[i]);
    }

    return 0;
}
