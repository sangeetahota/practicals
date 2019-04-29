#include<stdio.h>
#include<conio.h>
void length(char str[])
{
    int cnt=0;
    while(str[cnt]!='\n')
        cnt++;
    printf("length of string=%d\n",cnt);
}
void copystring(char str[])
{
    char cp[30];
    int i;
    for(i=0;str[i]!='\0';i++)
        cp[i]=str[i];
    cp[i]='\0';
    printf("Copied string=%s\n",cp);
}
void compare(char str[])
{
    char str1[20];
    int i,d=0;
    printf("\n Enter a string to compare=");
    scanf("%s",str1);
    for(i=0;str[i]!='\0',str1[i]!='\0';i++)
    {
        d=d+str[i]-str1[i];
    }
    printf("compare=%d\n",d);
}
void concate(char str[])
{
    int i,c;
    char str1[20];
    printf("\n Enter a string for concate=");
    scanf("%s",str1);
    for(c=0;str[c]!='\n';c++)
        for(i=0;str1[i]!='\0';i++,c++)
        str[c]=str1[i];
    str[c]='\n';
    printf("String after concate=%s\n",str);
}
void main()
{
    char str[30];
    printf("Enter a string=");
    scanf("%s",str);
    length(str);
    copystring(str);
    compare(str);
    concate(str);
}
