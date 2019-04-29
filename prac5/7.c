#include<stdio.h>
#define N 30
int q[N],s[N];
int f=-1,r=-1,p=-1;
void enque(int s)
{
    if(f>N)
        printf("overflow\n");
    else
        q[++r]=s;
    if(f==-1)
        f++;
}
int deque()
{
    if(r<f)
        printf("underflow\n");
    else
        return q[f++];
    return 0;
}
void push(int n)
{
    if(p>N)
        printf("overflow stack \n");
    else
        s[++p]=n;
}
int pop()
{
    if(p<0)
        printf("underflow stack \n");
    else
        return s[p--];
}
void display()
{

    int i;
    for(i=f;i<=r;i++)
        printf("%d\t",q[i]);
}
void rev()
{
    while(r>=f)
        push(deque());
    while(p> -1)
        enque(pop());
    display();
}
void main()
{
    int i,n,c;
    printf("Enter no of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d=",i+1);
        scanf("%d",&c);
        enque(c);
    }
   printf("\n input=[");
   display();
   printf("]\n");
   printf("\n output=[");
   rev();
   printf("]\n");
}


