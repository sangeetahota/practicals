#include<stdio.h>
#include<string.h>
char s[30];int p=0,t=0;
char tmp[30];
void push(char ch)
{
    if(t>30)
        printf("overflow\n");
    else
        s[t++]=ch;
}
int pop()
{
    if(t!=0)
        return s[--t];
    else
        printf("underflow \n");
    return p;
}
void push_tmp(char ch)
{
    if(p>30)
         printf("overflow\n");
    else
        tmp[p++]=ch;
}
char pop_tmp()
{
    if(p!=-1)
        return tmp[--p];
    else
        printf("\n underflow\n");
    return 0;
}
void display()
{
    int i;
    for(i=0;i<p;i++)
        printf("%c",tmp[i]);
}
void sortstr()
{
    char ch;
    while(t>0)
    {
        ch=pop();
        if(tmp[p-1]<ch)
            push_tmp(ch);
        else
        {
            while(tmp[p-1]>ch)
                push(pop_tmp());
            push_tmp(ch);
        }
    }
}
void main()
{
    char str[30];
    int i;
    printf("Enter a string=");
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++)
        push(str[i]);
    sortstr();
    printf("sorted string=");
    display();
    printf("\n");
}
