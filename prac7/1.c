#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

void infirst(int n)
{
    struct node *new,*tmp;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        new->next=head;
    }
    else
    {
        tmp=head;
        do
        {
            tmp=tmp->next;
        }while(tmp->next!=head);
        new->next=head;
        head=new;
        tmp->next=head;
    }
}
void insert(int n)
{
    int i,cnt=1;
    struct node *new,*tmp;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
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
        tmp->next=new;
    }
}
void delfirst()
{
    struct node *tmp,*tmp1;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        tmp=head;
        tmp1=head;
        do
        {
            tmp=tmp->next;
        }while(tmp->next!=head);
        head=head->next;
        tmp->next=head;
        printf("\n deleted data=%d\n",tmp1->data);
        free(tmp1);
    }
}
void delete()
{
    int cnt=1,i;
    struct node *tmp,*prev;
    printf("Enter index which top delete=");
    scanf("%d",&i);
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        while(cnt!=i)
        {
            prev=tmp;
            tmp=tmp->next;
            cnt++;
        }
        prev->next=tmp->next;
        printf("\n deleted data=%d\n",tmp->data);
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
        do
        {
            printf("%d\t",tmp->data);
            tmp=tmp->next;
        }while(tmp!=head);
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
