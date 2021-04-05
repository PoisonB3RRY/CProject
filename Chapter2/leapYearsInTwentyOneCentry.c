#include <stdio.h>

int main()
{
    const int MAXYEAR = 2100;
    const int MINYEAR = 2000;

    int year = MINYEAR;

    while(year<MAXYEAR)
    {
        if((year % 4 ==0 && year %100 != 0) || year % 400 ==0)
        {
            printf("%d\n",year);
        }
        ++year;
    }

    return 0;

}
