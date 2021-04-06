#include <stdio.h>

void squeezedif(char s1[], char s2[]);

int main()
{   
    char s1[100] = {'a','b','c','a','a','c','d','f','f','q'};
    char s2[100] = {'a','f'};
    squeezedif(s1,s2);
    int i = 0;

    while(s1[i] != '\0')
    {
        putchar(s1[i]);
        i++;
    }
    putchar('\n');
}

void squeezedif(char s1 [], char s2 [])
{
    int i,j, k;

    for(k=0; s2[k]!='\0'; k++)
    {
        int deletetarget = s2[k];
        for(i=j=0;s1[i] != '\0'; i++)
        {
            if(s1[i] != deletetarget)
            {
                s1[j++]= s1[i];
            }
        }
        s1[j]= '\0';
    }

}
