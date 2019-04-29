#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*end=NULL;
int count=0;
void create(int n)
{
    struct node *new,*tmp;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    tmp=head;
    if(head==NULL)
        head=new;
    else
        end->next=new;
    count++;
    end=new;
}
void display()
{
    struct node *tmp;
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
        else
        {
            printf("\n elements\n");
        while(tmp->next!=NULL)
        {
            printf("%d\t",tmp->data);
            tmp=tmp->next;
        }
        printf("%d\t",tmp->data);
        }
}
void bubble()
{
    int t3,i=0,j;
    struct node *t1,*t2;
    t1=head;
    while(t1->next!=NULL)
    {
        j=0;
        t2=head;
        while(t2->next!=NULL && j<count=i-1)
        {
            if(t2->data>t2->next->data)
            {
                t3=t2->data;
                t2->data=t2->next->data;
                t2->next->data=t3;
            }
            j++;
            t2=t2->next;
        }
        t1=t1->next;
        i++;
    }
}
void main()
{
    int i,n,d,tmp;
    printf("Enter no of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d=",i+1);
        scanf("%d",&d);
        create(d);
    }
    display();
    bubble();
    display();
}
