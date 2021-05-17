#include <stdio.h>
#define swap(t,x,y) {t z; z=x; x=y; y=z; }

int main()
{
    int x = 10;
    int y = 5;
    swap(double, x ,y);
    printf("%d\t%d\n",x,y);

    return 0;
}
