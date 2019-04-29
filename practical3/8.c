#include<stdio.h>
int numc(int n,int *s);

void main()
{
    int n;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number of digits:%d",numc(n,&sum));
    printf("sum is :%d",sum);
}

int numc(int n,int *s)
{
    int c=0;
    if(n>0)
    {
        c++;
        *s=*s+n%10;
        numc(n%10,s);
    }
    return c;
}
