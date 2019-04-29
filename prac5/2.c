#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data;
    struct queue *next;
}*f=NULL,*r=NULL;
void enque(int n)
{
    struct queue *new;
    new=(struct queue*)malloc(sizeof(struct queue));
    new->next=NULL;
    new->data=n;
    if(f==NULL)
        f=new;
    else
        r->next=new;
    r=new;
}
void deque()
{
   struct queue *tmp;
   tmp=f;
   if(f==NULL)
        printf("\n underflow\n");
   else
   {
       f=f->next;
       printf("\n dequeue element=%d\n",tmp->data);
       free(tmp);
   }
}
void display()
{
    struct queue *tmp;
    tmp=f;
    if(f==NULL)
    {
        printf("\n queue is empty\n");
        return;
    }
    printf("\n elemewnts of queue\n");
    while(tmp!=NULL)
    {
        printf("%d\t",tmp->data);
        tmp=tmp->next;
    }
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


