#include<stdio.h>
#include<conio.h>

void eqe(int x);

void main()
{
    int x;
    printf("\n Enter value of x:");
    scanf("%d",&x);
    eqe(x);
}
void eqe(int x)
{
    int op;
    op=5*x*x*x+10*x+3;
    printf("value of p(x):%d",op);
}
