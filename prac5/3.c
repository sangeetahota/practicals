#include<stdio.h>
#define N 30
int s1[N],s2[N],p1=-1,p2=-1;
void enque(int s)
{
    if(p1>N)
        printf("overflow\n");
    else
       s1[++p1]=s;
}
void deque()
{
    if(p1==-1)
    {
        printf("underflow\n");
        return;
    }
    int i;
    for(i=p1;i>0-1;i++)
        s2[++p2]=s1[p1--];
    printf("dequeue element=%d\n",s2[p2--]);
    for(i=p2;i>-1;i++)
        s1[++p1]-s2[p2--];
}
void display()
{

    int i;
    if(p1==-1)
    {
        printf("\n empty queue \n");
        return;
    }
    printf("\n elements\n");
    for(i=0;i<=p1;i++)
        printf("%d\t",s1[i]);
    printf("\n");
}
void main()
{
    int n,ch;
    do
    {
        printf("choice\n");
        printf("1.enqueue \t 2.dequeue \t 3.display \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter elements=");
                scanf("%d",&n);
                enque(n);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(ch!=4);
}
