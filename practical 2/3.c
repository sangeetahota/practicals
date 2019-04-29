# include <stdio.h>
#include<conio.h>

void reverse(char [],int);

int main()
{
   char str[20];
   int l;
   printf("Enter a string:");
   scanf("%s",str);
   l=strlen(str);
   reverse(str,l);
}
void reverse(char *str,int l)
{
   char rev[20];
   int i;
   rev[l]='\0';
   for(i=l-1;*str!='\0';i--)
   {
       rev[i]=*str;
       str++;
   }
   printf("Reverse=%s\n",rev);
}
