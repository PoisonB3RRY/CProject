#include <stdio.h>
#define ALLOCSIZE 10000 //size of available space

static char allocbuf[ALLOCSIZE]; // storate for alloc
static char *allocp = allocbuf; //next free position

char *alloc(int n)
{
    if(allocbuf + ALLOCSIZE - allocp >= n) //have enough space to be allocation
    {
        allocp += n;
        return allocp - n;
    }
    else 
    {
        return 0; //no enough space
    }
}

void afree(char *p) //fredd storage pointed to by p*
{
    if (p >= allocbuf && p< allocbuf + ALLOCSIZE)
        allocp = p;
}
