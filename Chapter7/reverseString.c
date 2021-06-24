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

    while(1)
    {
        int lenght = strlen(s);
        forward = s;
        backword = s + lenght - 1;

        for (; backword >= s; backword--)
        {
            if (*backword != '(')
            {
                continue;
            }
            for (; forward < s + lenght - 1; forward++)
            {
                if(*forward != ')')
                {
                    continue;
                }
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
                printf("%s\n",s);
                deletec(s, backword);
                printf("%s\n", s);
                deletec(s, forward - 1);
                printf("%s\n", s);
                break;
            }
            break;
        }
    }
}

void deletec(char *s, char *address)
{
    int len = strlen(s);
    int  c= s + len - address + 1;

    while(s[c] != '\0')
    {
        s[c] = s[c+1];
        c++;
    }
    // printf("%s\n",s);
}