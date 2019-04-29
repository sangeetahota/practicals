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
   char rev[20],str1[20];
   int i,d=0;
   strcpy(str1,str);
   rev[l]='\0';
   for(i=l-1;*str!='\0';i--)
   {
       rev[i]=*str;
       str++;
   }
   printf("Reverse=%s\n",rev);
   i=0;
   while(rev[i]!='\0')
   {
       if(str1[i]==rev[i])
            d++;
       i++;
   }
   if(d==l)
    printf("Palindrome string");
   else
    printf("Not palindrome");
}
