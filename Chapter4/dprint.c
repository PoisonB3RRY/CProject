#include <stdio.h>
#define dprint(expr) printf(#expr " =%g\n", expr)

int main()
{
    double x=10.0;
    double y=2.0;

    dprint(x/y);

    return 0;
}
