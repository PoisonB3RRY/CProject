#include<stdio.h>

int setbitsDif(int a, int b, int c, int d);

int main()
{
    int x = 0xAF;
    int y = 0x80;

    int n=4;
    int p=4;

    int result = setbitsDif(x,p,n,y);
    printf("0x%x\n", result);
}

/* returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged. */

int setbitsDif(int x, int p, int n, int y)
{
    //get n bits begin at position p of x

    int nBitsOfx = (x >> (p+1-n)) & ~(~0 << n);

    // add nBitsOfx to y's rightmost n bits

    int result = (y & (~0 << n)) | nBitsOfx;

    return result;
}
