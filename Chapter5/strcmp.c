#include <stdio.h>
int strcmp(char *, char *);


int main()
{
    char s[]= "world,hello";
    char t[] = "lisa ,hello";

    int result = strcmp(s,t);
    printf("%d\n", result);

    return 0;
}

int strcmp(char *s, char *t)
{
    int i;

    for(i=0; s[i] == t[i]; i++)
    {
        if(s[i] == '\0')
            return 0;
    }
    return s[i] - t[i];
}
