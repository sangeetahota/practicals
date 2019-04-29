#include<stdio.h>
#include<string.h>

int main()
{
    char st[10],len,i,j,temp,rev[10];

    printf("Enter string:");
    scanf("%s",&st);

    len=strlen(st);

    for(i=len-1;i>=0;i--)
        rev[j++]=st[i];
    rev[i]='\0';

    for(i=0;i<len;i++)
    {
        if(st[i]==rev[i])
        {
            temp=1;
        }
        else
        {
            temp=0;
        }
    }
    if(temp==1)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
