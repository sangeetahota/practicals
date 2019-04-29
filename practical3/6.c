#include<stdio.h>
long int power(int n,int p);

void main()
{
   long int n,p;
    printf("Enter base n:");
    scanf("%ld",&n);
    printf("Enter power p:");
    scanf("%ld",&p);
    printf("%ld to the power %ld:%ld",n,p,power(n,p));
}

long int power(int n,int p)
{
    if(p>1)
        return n*power(n,p-1);
}
