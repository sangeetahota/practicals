
#include<stdio.h>
int sumn(int n);

void main()
{
    int n;
    printf("Enter number n:");
    scanf("%d",&n);
    printf("sum of number %d:%d",n,sumn(n));
}

int sumn(int n)
{
    if(!n==0)
        return n+sumn(n-1);
    else
        return 0;
}
