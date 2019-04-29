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
    new->next=f;
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
       r->next=f;
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
    printf("\n elements \n");
    do
    {
        printf("%d\t",tmp->data);
        tmp=tmp->next;
    }while(tmp!=f);
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
