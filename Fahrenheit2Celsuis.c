#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* print Fahrenheit-Celsius table
       for fahr = 0, 20, ..., 300 */
    int fahr, calsius;
    int lower, upper, step;

    lower = 0;   //lower limit of temprature scale
    upper = 300; //upper limit
    step = 20;   //step size

    fahr = lower;
    while (fahr <= upper)
    {
        calsius = (fahr - 32) * 5 / 9;
        printf("%d\t%d\n", fahr, calsius);
        fahr = fahr + step;
    }

    return 0;
}
