#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline1(char *line,int max);

int main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    if(argc != 2)
    {
        printf("Usage: find pattern.\n");
    }
    else
    {
        while(getline1(line, MAXLINE) > 0)
        {
            if(strstr(line, argv[1]) != NULL)
            {
                printf("%s", line);
                found++;
            }
        }
    }
    return found;
}

int getline1(char *line, int max)
{
    int c,i;

    i = 0;
    while((c=getchar())!= EOF && c != '\n' && i<max)
    {
        line[i] = c;
        i++;
    }
    line[i] = '\n';
    return i;
}
