#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsuis, fahrenheit;
    float upper, lower, step;

    upper = 100.0;
    lower = 0;
    step = 5.0;

    celsuis = lower;
    while (celsuis <= upper)
    {
        fahrenheit = 9.0 * celsuis / 5.0 + 32;
        printf("%3.0f\t%6.2f\n", celsuis, fahrenheit);
        celsuis = celsuis + step;
    }

    return 0;
}
