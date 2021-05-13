#include<stdio.h>
#include<stdlib.h>
#include <cal4getop.c>
#include <cal4getch.c>
#include <cal4PushPop.c>


#define MAXOP 100
#define NUMBER '0'

int getop(char s[]);
void push(double d);
double pop();

int getop(char s[]);
void push(double e);
double pop();

/* reverse Polish calculator */
void main()
{
    int type;
    double op2;
    char s[MAXOP];

    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                {
                    push(pop() / op2);
                }
                else
                {
                    printf("error: zero devisor \n");
                }
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown commant %s\n",s);
                break;
        }
    }
}
