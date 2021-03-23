#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsuis;
    float upper, lower, step;

    upper = 300.0;
    lower = 0;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celsuis = 5 * (fahr - 32) / 9;
        printf("%3.0f   %6.1f\n", fahr, celsuis);
        fahr = fahr + step;
    }

    return 0;
}
