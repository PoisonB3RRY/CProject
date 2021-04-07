#include <stdio.h>

int findFirstCharInS2(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
    /* code */
    char s1[100] = {'a', 'b', 'c', 'a', 'a', 'c', 'd', 'f', 'f', 'q'};
    char s2[100] = {'q', 'f'};

    int result = findFirstCharInS2(s1, s2);
    printf("%d\n", result);
    return result;
}

int findFirstCharInS2(char s1[], char s2[])
{
    int i, j, temp;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s1[i] != s2[j] && s2[j] != '\0'; j++)
        {
            printf("%c\t%c\n", s1[i], s2[j]);
        }
        if (s1[i] == s2[j])
        {
            temp = i;
            break;
        }
    }

    return temp;
}