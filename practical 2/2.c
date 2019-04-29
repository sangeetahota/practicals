#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[30],str1[30];
    int i,j,cnt=0,cnt1=0,tmp[10],n;
    printf("Enter a string=");
    scanf("%[^\n]",str);
    printf("Enter a word to search=");
    scanf("%s",str1);
    i=0;
    while(str[j]!='\0')
    {
        j=0;cnt=0;
        while(str[i]==str1[j] && str1[j]!='\0')
        {
            cnt++;i++;j++;
        }
        if(cnt==strlen(str1))
        {
            tmp[n+1]=i-strlen(str1);
            cnt++;
            cnt=0;
        }
        else
            i++;
    }
    printf("%s is occur %d time \n",str1,cnt1);
    replace(str,str1,tmp);
}
void replace(char str[],char str1[],int t[])
{
    char new[30],temp[30];
    int i,j,k;
    printf("Enter new word for replace=");
    scanf("%s",new);
    if(strlen(str1)<strlen(new))
    {
        i=strlen(new)-strlen(str1);
        for(k=strlen(str)+i;k>=t[0]+strlen(str1);k--)
        {
            str[k]=str[k-i];
        }
    }
    if(strlen(str1)>strlen(new))
    {
        i=strlen(str1)-strlen(new);
        for(k=t[0]+strlen(str1);str[k]!='\0';k++)
        {
            str[k-i]=str[k];
        }
        str[k-i]='\n';
    }
    for(i=t[0],j=0;j<strlen(new);i++)
    {
        str[i]=new[j++];
    }
    printf("%s\n",str);
}
