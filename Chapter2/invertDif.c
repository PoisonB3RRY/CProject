#include <stdio.h>

int invert(int a, int b, int c);

int main()
{
    int x, p, n;

    x = 0x86;
    p = 3;
    n = 4;
    int result = invert(x, p, n);
    printf("0x%x\n", result);
    return 0;
}

int invert(int x, int p, int n)
{
    int temp, nBits, result;

    temp = x & ~0;
    nBits = (temp >> (p + 1 - n)) & ~(~0 << n);
    nBits = ~nBits & ~(~0 << n);
    result = (x & (~0 << n)) | nBits;

    return result;
}