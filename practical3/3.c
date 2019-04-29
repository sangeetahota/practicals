#include<stdio.h>
int fibonacci(int n);

void main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("At position %d the value is %d",n,fibonacci(n));
}

int fibonacci(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
