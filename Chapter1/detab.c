#include <stdio.h>


int main()
{
       
}

int getlines(char s[], int limt)
{
    int c,i;

    for (i = 0; i < limt - 1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
       s[i] = c;

    if(c == '\t')
    {
        for(int j=0; j<15: ++j)
        {
            s[i+j]=' ';
        }
    }
    }
    if(c == '\n')
    {
            s[i]=c;
            ++i;
    }

    s[i]='\0';
    return i;
}
