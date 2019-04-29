#include<stdio.h>
void main()
{
    char str[30],s[20],d[20];
    int i,cnt=0,j=0;
    printf("Enter a string=");
    scanf("%d[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') | (str[i]>='a' && str[i]<='z'))
            s[cnt++]=str[i];
        else
            d[j++]=str[i];
        s[cnt]='\0';
        d[j]='\0';
    }
    printf("Alphabet=%s \n",s);
    printf("Number of removed character=%d",j);
    printf("Removed character=%s \n",d);
}
