#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enque(int n)
{
    struct node *new,*tmp;
    new=(struct queue*)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    tmp=front;
    if(front==NULL)
        front=rear=new;
    else
        rear->next=new;
    rear=new;
}
void deque()
{
   struct node *tmp;
   if(front==NULL)
        printf("\n list is empty\n");
   else
   {
       tmp=front;
       front=front->next;
       printf("\n deleted element=%d\n",tmp->data);
       free(tmp);
   }
}
void display()
{
    struct node *tmp;
    tmp=front;
    if(front==NULL)
        printf("\n list is empty\n");
        else
        {
            printf("\n elements\n");
        while(tmp!=NULL)
        {
            printf("%d\t",tmp->data);
            tmp=tmp->next;
        }
        printf("\n");
        }
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



