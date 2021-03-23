#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 30)
    {
        printf("%d\t%6.1f\n", fahr, (fahr - 32) * (5.0 / 9.0));
    }
    return 0;
}
