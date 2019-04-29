#include<stdio.h>
int s[30],p=0;
void push(int n)
{
    if(p>30)
        printf("overflow stack\n");
    else
        s[p++]=n;
}
int pop()
{
    if(p<0)
        printf("underflow stack \n");
    else
        return s[--p];
}
int isEmpty()
{
    if(p==0)
        return 1;
    return 0;
}
void display()
{
    int i;
    for(i=p-1;i>=0;i--)
        printf("%d\t",s[i]);
}
void sortedInsert(int x)
{
    int temp;
    if(isEmpty() || x>s[p-1])
    {
        push(x);
        return;
    }
    temp=pop();
    sortedInsert(x);
    push(temp);
}
void sort()
{
    int temp;
    if(isEmpty())
        return;
    else
    {
        temp=pop();
        sort();
        sortedInsert(temp);
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
    sort();
    printf("sorted stack \n");
    display();
    printf("\n");
}
