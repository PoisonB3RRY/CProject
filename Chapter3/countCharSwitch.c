/*
 * =====================================================================================
 *
 *       Filename:  countCharSwitch.c
 *
 *    Description: Count char in a String, with switch keyword 
 *
 *        Version:  1.0
 *        Created:  2021/04/13 10时14分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  nickj 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
    int c, i, nwhite, nother, ndigit[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; i++)
    {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            ndigit[c - '0']++;
            break;

        case ' ':
        case '\t':
        case '\n':
            nwhite++;
            break;
        default:
            nother++;
            break;
        }
    }
    printf("\ndigits = ");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }
    printf(", white = %d, other = %d\n", nwhite, nother);
    return 0;
}
