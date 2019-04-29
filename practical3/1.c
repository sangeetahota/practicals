#include<stdio.h>
int factorial(int n);

void main()
{
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    printf("factorial of %d is :%d",m,factorial(m));
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
