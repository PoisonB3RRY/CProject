#include <stdio.h>

int rightrotdif(int x, int n);
int wordlength();

int main(int argc, char const *argv[])
{
    int x, n;

    x = 0x8a;
    n = 4;
    int result = rightrotdif(x, n);
    printf("0x%x\n", result);
    return 0;
}

int rightrotdif(int x, int n)
{
    int result;

    int nBits = x & ~(~0 << n);
    printf("%x\n", nBits);
    nBits = nBits << (wordlength() - n);
    printf("%x\n", nBits);
    result = (x >> n) | nBits;
    return result;
}

int wordlength()
{
    int i = ~0;
    int j;

    for (j = 0; (i = i >> 1) > 0; j++)
    {
        ;
    }
    return j;
}
