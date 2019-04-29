#include<stdio.h>
#include<ctype.h>
void push(int n);
int pop();
char s[30]; int p=0;
void push(int n)
{
    s[p++]=n;
}
int pop()
{
    return s[--p];
}
void main()
{
    char e[50],*exp;
    int n,ans=0;
    printf("Enter a postfix expression=");
    scanf("%s",e);
    exp=e;
    while(*exp!='\n')
    {
        if(isdigit(*exp))
            push(*exp-'o');
        else
        {
            switch(*exp)
            {
            case '+':
                ans=pop()+pop();
            case '-':
                ans=pop()-pop();
                break;
            case '*':
                ans=pop()*pop();
                break;
            case '/':
                ans=pop()/pop();
                break;
            }
            push(ans);
        }
        exp++;
    }
    printf("Answer=%d\n",pop());
}
