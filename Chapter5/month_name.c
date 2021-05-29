#include <stdio.h>

char *month_name(int);

void main()
{
    int n;

    printf("month number: ");
    scanf("%d", &n);

    char *name = month_name(n);
    printf("%s\n", name);
}

char *month_name(int n)
{
    
    static char *name[] = {
        "Illegal month",
        "Jenuary",
        "Feberuary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    
    return (n<1 || n>12) ? name[0]: name[n];
}
