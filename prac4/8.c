#include<stdio.h>
#include<conio.h>
#define N 30
int s[N],p=0;
void push(int n)
{
    if(p>30)
        printf("overflow stack\n");
    else
        s[p++]=n;
}
int pop()
{
    if(p<=0)
        printf("underflow stack \n");
    else
        return s[--p];
}
void display()
{
    int i;
    for(i=p-1;i>=0;i++)
        printf("%d\t",s[i]);
}
int isEmpty()
{
    if(p==0)
        return 1;
    return 0;
}
void insert(int n)
{
    int tmp;
    if(isEmpty())
        push(n);
    else
    {
        tmp=pop();
        insert(n);
        push(tmp);
    }
}
void rev()
{
    int tmp;
    if(!isEmpty())
    {
        tmp=pop();
        rev();
        insert(tmp);
    }
}
void main()
{
    int d,i,n;
    printf("Enter no of elements for push=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d=",i+1);
        scanf("%d",&d);
        push(d);
    }
    printf("\n stack\n");
    display();
    rev();
    printf("\n reverse stack \n");
    display();
    printf("\n");
}
