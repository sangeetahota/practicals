#include<stdio.h>
#define N 30
int q[N];
int f=-1,r=-1;
void enque(int n)
{
    if(r>=N-1 && f!=0)
        r=-1;
    if(r<N-1)
        q[++r]=n;
    if(f==-1)
        f++;
}
void deque()
{
    if(r==f)
        printf("underflow\n");
    else
        printf("Dequeue element=%d\n",q[f++]);
}
void display()
{

    int i;
    printf("\n elements\n");
    if(r<f)
    {
      for(i=f;i<N;i++)
            printf("%d\t",q[i]);
      for(i=0;i<=r;i++)
        printf("%d\t",q[i]);
    }
    else
    {
       for(i=f;i<=r;i++)
        printf("%d\t",q[i]);
    }
    printf("\n");
}
void main()
{
    int n,c;
    do
    {
        printf("choice\n");
        printf("1.enqueue \t 2.dequeue \t 3.display \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                if(f==r && f>0 || r>=N)
                    printf("\n overflow\n");
                else
                {
                    printf("enter elements=");
                    scanf("%d",&n);
                    enque(n);
                }
                display();
                break;
            case 2:
                deque();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
    }while(c!=4);
}


