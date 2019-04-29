#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*end=NULL;

void display()
{
    struct node *tmp;
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        printf("elements\n");
        while(tmp->next!=head)
        {
            printf("%d\t",tmp->data);
            tmp=tmp->next;
        }
        printf("%d\n",tmp->data);
        while(tmp->prev!=end)
        {
            printf("%d\t",tmp->data);
            tmp=tmp->prev;
        }
        printf("%d\n",tmp->data);
    }
}
void infirst(int n)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL)
    {
        head=new;
        end=new;
        new->next=head;
        new->prev=end;
        end->next=head;
    }
    display();
}
void inlast(int n)
{
     struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=n;
    end->next=new;
    new->prev=end;
    new->next=head;
    end=new;
    head->prev=new;
    display();
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
        printf("\n list is empty\n");
    else
    {
        while(cnt!=i)
        {
            tmp=tmp->next;
            cnt++;
        }
        new->next=tmp->next;
        tmp->next->prev=new;
        new->prev=tmp;
        tmp->next=new;
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
        end->next=head;
        head->prev=end;
        printf("\n deleted element=%d\n",tmp->data);
        free(tmp);
    }
}
void main()
{
    int n,ch;
    do
    {
        printf("\n choices\n");
        printf("1.Insert at first \t 2.insert at last \t 3.insert at desire place \t 4.delete from first \t 5.display \t 6.exit \n");
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
                inlast(n);
                break;
            case 3:
                printf("\n Enter element=");
                scanf("%d",&n);
                insert(n);
                break;
            case 4:
                delfirst();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
        }
    }while(ch!=6);
}

