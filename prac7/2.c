#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*end=NULL;

void infirst(int n)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    new->prev=NULL;
    if(head!=NULL)
    {
        new->next=head;
        new->prev=head;
        head=new;
    }
    else
    {
       head=end=new;
    }
}
void insert(int n)
{
    int i,cnt=1;
    struct node *new,*tmp;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    new->prev=NULL;
    printf("Enter index where you want to insert=");
    scanf("%d",&i);
    tmp=head;
    if(head==NULL)
        head=end=NULL;
    else
    {
        while(cnt!=i)
        {
            tmp=tmp->next;
            cnt++;
        }
        new->next=tmp->next;
        tmp->next->prev=new;
        tmp->next=new;
        new->prev=tmp;
    }
}
void delfirst()
{
    struct node *tmp;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        tmp=head;
        head=head->next;
        head->next->prev=head;
        head->prev=tmp->prev;
        tmp->prev=head;
        printf("\n deleted element=%d\n",tmp->data);
        free(tmp);
    }
}
void display()
{
    struct node *tmp;
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        printf("elements\n");
        while(tmp->next!=NULL)
        {
            printf("%d\t",tmp->data);
            tmp=tmp->next;
        }
        printf("%d\n",tmp->data);
        while(tmp!=NULL)
        {
            printf("%d",tmp->data);
            tmp=tmp->prev;
        }
    }
}
void delete()
{
    int cnt=1,i;
    struct node *tmp,*p;
    printf("Enter index which to delete=");
    scanf("%d",&i);
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        while(cnt!=i)
        {
            p=tmp;
            tmp=tmp->next;
            cnt++;
        }
        if(tmp==head)
            delfirst();
        else if(tmp==end)
        {
            struct node *tmp;
            if(head==NULL)
                printf("\n list is empty\n");
            else
            {
                tmp=end;
                end=end->prev;
                end->next=NULL;
                printf("\n deleted data=%d\n",tmp->data);
                free(tmp);
            }
        }
        else
        {
            p->next=tmp->next;
            p->next->prev=p;
            printf("\n deleted element=%d\n",tmp->data);
            free(tmp);
            display();
        }
    }
}
void main()
{
    int n,ch;
    do
    {
        printf("\n choices\n");
        printf("1.Insert at first \t 2.insert at desire place \t 3.delete from first \t 4.delete from desire place \t 5.display \t 6.exit \n");
        printf("Enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter element=");
                scanf("%d",&n);
                infirst(n);
                break;
            case 2:
                printf("\n Enter element=");
                scanf("%d",&n);
                insert(n);
                break;
            case 3:
                delfirst();
                break;
            case 4:
                delete();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
        }
    }while(ch!=6);
}
