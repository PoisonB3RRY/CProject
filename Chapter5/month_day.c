#include <stdio.h>

static char daytab[2][12] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int day_of_year(int, int, int);
void month_day(int, int, int *, int *);

void main()
{
    int year, month, day;
    printf("year: ");
    scanf("%d", &year);
    printf("month: ");
    scanf("%d", &month);
    printf("day: ");
    scanf("%d", &day);

    char date[] = {year, '-', month, '-', day};

    int result = day_of_year(year, month, day);
    printf("Day of: %s\t is %d\n", date, result);
}

//day_of_year: set day of year from month & day
int day_of_year(int year, int month, int day)
{
    int i, leap;
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 != 0);

    for (i = 0; i < month; i++)
    {
        day += daytab[leap][i];
    }

    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year % 4 == 0 && year % 100 == 0 || year % 400 == 0);

    for (i = 0; yearday > daytab[leap][i]; i++)
    {
        yearday -= daytab[leap][i];
    }

    *pmonth = i;
    *pday = yearday;
}