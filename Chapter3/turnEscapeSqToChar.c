#include <stdio.h>
#include <string.h>

int escape(char s[], char t[]);

int main()
{
    char s[100], t[100];
    int c;
    int i,j;
    i=j=0;

    while((c=getchar())!=EOF)
    {
        t[i] = c;
        ++i;
    }
    t[++i]='\0';

    escape(s,t);
    printf("\n%s\n",s);
}

int escape(char s[], char t[])
{
    int i,j;
    i=j=0;

    while(t[i] != '\0')
    {
        switch(t[i])
        {
            case'\n':
                s[j]='\\';
                s[++j]='n';
                break;
            case'\t':
                s[j]='\\';
                s[++j]='t';
                break;
            default:
                s[j]=t[i];
                break;
        }
        i++;
        j++;
    }

}
