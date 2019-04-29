#include<stdio.h>
#define N 30
int q[N];
int f=-1,r=-1;
void enque(int n)
{
    if(f>N)
        printf("overflow\n");
    else
        q[++r]=n;
    if(f==-1)
        f++;
}
void deque()
{
    if(r<f)
        printf("underflow\n");
    else
        printf("Dequeue element=%d\n",q[f++]);
}
void display()
{

    int i;
    printf("\n elements\n");
    for(i=f;i<=r;i++)
        printf("%d\t",q[i]);
    printf("\n");
}
void main()
{
    int n,c;
    do
    {
        printf("choice\n");
        printf("1.enqueue 2.dequeue 3.display 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&c);
        switch(c)
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
    }while(c!=4);
}

