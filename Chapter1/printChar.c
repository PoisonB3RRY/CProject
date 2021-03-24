#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        printf("getchar() != EOF: %d \n", getchar() != EOF);
        c = getchar();
    }

    return 0;
}
