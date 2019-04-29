#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

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
    {
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=new;
    }
}
int search(struct node *head,int n)
{
    if(head==NULL)
        return 0;
    if(head->data==n)
        return 1;
    search(head->next,n);
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
void main()
{
    int i,n,e,s;
    printf("enter no of nodes to enter=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements=");
        scanf("%d",&e);
        create(e);
    }
    display();
    printf("\n enter element to search=");
    scanf("%d",&s);
    if(search(head,s))
        printf("%d is found\n",s);
    else
        printf("%d is not found \n",s);
}
