#include<stdio.h>
void change(char str[],int n)
{
    char ch,i;
    printf("Enter new char=");
    scanf("%c",&ch);
    str[i]=ch;
    printf("After change=%s \n",str);
}
void main()
{
    char str[30];
    int n;
    printf("Enter a string=");
    scanf("%[^\n]",str);
    fflush(stdin);
    printf("Enter index for change char=");
    scanf("%d",&n);
    change(str,n);
}
