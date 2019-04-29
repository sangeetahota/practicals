#include<stdio.h>
int fibonacci(int n);

void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("%d \t",fibonacci(i));
}

int fibonacci(int n)
{
    if(n==1 || n==0)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
