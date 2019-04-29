#include<stdio.h>
#define N 30
void push(int);
void pop();
int peep(int);
void display();
int s[N],p=0;
void main()
{
    int ch,n,i;
    do
    {
        printf("\n choices\n");
        printf("1.push \t 2.pop \t 3.peep \t  4.display \t 5.exit \n");
        printf("Enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter a element for push=");
                scanf("%d",&n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Enter index number=");
                scanf("%d",&i);
                printf("Element on %d index=%d\n",i,peep(i));
                break;
            case 4:
                printf("\n elements of stack \n");
                display();
                break;
            case 5:
                break;
            }
        }while(ch!=5);
}
void push(int n)
{
    if(p>N)
        printf("overflow stack \n");
    else
        s[p++]=n;
}
void pop()
{
    if(p<=0)
        printf("underflow stack \n");
    else
        printf("poped element=%d\n",s[--p]);
}
int peep(int i)
{
    if(p-i<0)
        printf("underflow stack\n");
    else
        return s[p-i];
}
void display()
{
    int i;
    for(i=p-1;i>=0;i++)
        printf("%d \n",s[i]);
}
