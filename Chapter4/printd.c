#include <stdio.h>

int printd(int);

int main()
{
    int n = 123456789;
    printd(n);
    printf("\n");
}

int printd(int n)
{
    if(n<0)
    {
        putchar('-');
        n= -n;
    }

    if(n/10)
    {
        printd(n/10);
    }
    putchar(n%10 + '0');
}
