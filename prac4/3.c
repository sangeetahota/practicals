#include<stdio.h>
#include<ctype.h>
char s[30]; int p=0;
void push(char n);
int pop();

void push(char n)
{
    s[p++]=n;
}
int pop()
{
    return s[--p];
}
int check(char e)
{
    if(e=='(')
        return 0;
    if(e=='+' || e=='-')
        return 1;
    if(e=='/' || e=='*')
        return 2;
    if(e=='^' || e=='$' || e=='|')
        return 3;
}
void main()
{
    char exp[50];
    char *ex,x;
    printf("Enter infix exp=");
    scanf("%s",exp);
    ex=exp;
    printf("\n postfix expression \n");
    while(*ex!='\n')
    {
        if(isalnum(*ex))
            printf("%c",*ex);
        else if(*ex=='(')
                    push(*ex);
        else if(*ex==')')
        {
            x=pop();
            while(x!='(')
            {
                printf("%c",x);
                x=pop();
            }
        }
        else
        {
            while(check(s[p-1])>=check(*ex))
                printf("%c",pop());
            push(*ex);
        }
        ex++;
    }
    while(p>0)
        printf("%c",pop());
}
