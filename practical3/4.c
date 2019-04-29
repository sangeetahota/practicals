#include<stdio.h>
int gcd(int p,int q);

void main()
{
    int p,q;
    printf("Enter number1:");
    scanf("%d",&p);
    printf("Enter number2:");
    scanf("%d",&q);
    printf("gcd is:%d",gcd(p,q));
}

int gcd(int p,int q)
{
    if(!p==0 && !q==0)
        return gcd(q,p%q);
}
