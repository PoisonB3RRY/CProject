#include <stdio.h>
#include <string.h>

void reverse(char *);
void deletec(char *, char *);

int main()
{
    char s[] = "(ed(et(oc))el)";
    printf("%s\n", s);
    reverse(s);
    printf("%s\n", s);

    return 0;
}

//找括号：先找最后一个 "("和第一个 ")"，翻转里面的内容，去掉括号，然后找下一个，以此类推
void reverse(char *s)
{
    int c;

    char *forward, *backword;

    int lenght = strlen(s);

    forward = s;
    backword = s + lenght - 1;

    for (; backword >= s; backword--)
    {
        if (*backword == '(')
        {
            printf("123");
            for (; forward < s + lenght - 1; forward++)
            {
                if (*forward == ')')
                {
                    printf("456");
                    char *p1, *p2;
                    p1 = backword;
                    p2 = forward;
                    while (p1 < p2)
                    {
                        char c = *p1;
                        *p1 = *p2;
                        *p2 = c;
                        p1++;
                        p2--;
                    }
                    deletec(s, forward);
                    printf("forword: %c\n", *forward);
                    deletec(s, backword);
                    printf("backword: %c\n", *backword);
                }
                break;
            }
        }
        continue;
    }
    // char *ret1 = strchr(s, '(');
    // char *ret2 = strchr(s, ')');
    // printf("ret1: %s\n", ret1);
    // printf("ret2: %s\n", ret2);

    // if (ret1 && ret2)
    // {
    //     continue;
    // }
    // break;
}

void deletec(char *s, char *address)
{
    int c;
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        if (s[i] != *address)
        {
            continue;
        }
        s[i] = s[i + 1];
    }
    s = s - strlen(s) + 1;
}