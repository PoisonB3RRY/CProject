#include <stdio.h>

int bitcount(unsigned x)
{

    int b;

    for (b=0; x!=0; x>>=1)
    {
        if (x & 01)
        {
            b++;
        }
    }

    return b;
}

int main()
{
    int x = 0x7f;

    int result = bitcount(x);
    printf("result: %d\n", result);
    return 0;
}
