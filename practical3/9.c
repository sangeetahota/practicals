#include<stdio.h>
int strlength(char *);
void main()
{
    char str[20];
    printf("Enter a string=");
    scanf("%s",str);
    printf("length=%d\n",strlength(str));
}
int strlength(char * str)
{
    static int c=0;
    if(*str!='\0')
    {
        c++;
        strlength(str+1);
    }
    return c;
}
