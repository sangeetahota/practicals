#include<stdio.h>

int main()
{
    int a,b,p,q;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter p:");
    scanf("%d",&p);
    printf("Enter q:");
    scanf("%d",&q);

    printf("After swapping:");
    swap(a,b);

    printf("\n After swapping:");
    swapp(&p,&q);
return 0;
}

void swap(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("\n value of a=%d & val of b=%d",x,y);
}

void swapp(int *c,int *d)
{
    int temp=0;
    temp=c;
    c=d;
    d=temp;
    printf("\n value of p=%d & val of q=%d",*c,*d);
}

