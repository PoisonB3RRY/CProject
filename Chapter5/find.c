#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline1(char *line, int max);

int main(int argc, char *argv[])
{
    char line[MAXLINE];
    long lineno=0;
    int c, except = 0, number = 0;
    int found = 0;

    while(--argc >0 && (*++argv)[0] == '-') //此时argv被推进1，指向argv[]中的第二个参数
    {
        while(c = *++argv[0]) //*++argv[0]指向argv[1]，此时*argv指向第二个参数
        {
            switch (c)
            {
                case 'x':
                    except = 1;
                    break;
                case 'n':
                    number = 1;
                    break;
                default:
                    printf("find: illegal option:%c\n",c);
                    argc = 0;
                    found = -1;
                    break;
            }
            if (argc != 1)
            {
                printf("Usage: find -x -n pattern \n");
            }
            else
            {
                while(getline1(line, MAXLINE) > 0)
                {
                    lineno++;
                    if((strstr(line, *argv) != NULL) != except)
                    {
                        if (number)
                        {
                            printf("%ld:", lineno);
                        }
                        printf("%s", line);
                        found++;
                    }
                }
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
