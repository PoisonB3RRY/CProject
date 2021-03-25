#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("Line Count: %d\n", nl);

    return 0;
}
