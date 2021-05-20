#include <stdio.h>

int strlength(char *);

void main()
{
    char a[] = "hello, world!\n";

    int result = strlength(a);

    printf("result: %d\n", result);

}

int strlength(char *s)
{
    int n;

    for(n=0; *s != '\0'; s++)
    {
        n++;
    }

    return n;
}
