#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
char s[30];
int p=0;
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
    char exp[50],new[50],rev[50];
    int i,j,len;
    char x;
    printf("Enter infix expression=");
    scanf("%s",exp);
    len=strlen(exp);
    rev[len]='\n';
    for(i=0;exp[i]!='\n';i++)
        rev[--len]=exp[i];
    printf("\n prefix expression\n");
    i=0;j=0;
    while(rev[i]!='\n')
    {
        if(isalnum(rev[i]))
            new[j++]=rev[i];
        else if(rev[i]==')')
            push(rev[i]);
        else if(rev[i]=='(')
        {
            x=pop();
            while(x!=')')
            {
                new[j++]=x;
                x=pop();
            }
        }
        else
        {
            while(check(s[p-1])>check(rev[i]))
                new[j++]=pop();
            push(rev[i]);
        }i++;
    }
    while(p>0)
        new[j++]=pop();
    new[j]='\0';
    while(j>=0)
        printf("%c",new[j--]);
}
