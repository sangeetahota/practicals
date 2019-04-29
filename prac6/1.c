#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void infirst(int n)
{
    struct node *new;
    new=(struct node*) malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
        if(head!=NULL)
            new->next=head;
        head=new;
}
void inlast(int n)
{
    struct node *new,*tmp;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    tmp=head;
    if(head==NULL)
        printf("\n List is empty\n");
    else
    {
        while(tmp->next!=NULL)
            tmp=tmp->next;
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
        printf("\n deleted data=%d\n",tmp->data);
        free(tmp);
    }
}
void dellast()
{
    struct node *tmp,*prev;
    tmp=head;
    if(head==NULL)
        printf("\n list is empty");
    else
    {
        while(tmp->next!=NULL)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        printf("\n deleted element=%d\n",tmp->data);
        prev->next=NULL;
        free(tmp);
    }
}
void search(int n)
{
    int flag=0;
    struct node *tmp;
    if(head=NULL)
        printf("\n list is empty\n");
    else
    {
        tmp=head;
        while(tmp!=NULL)
        {
            if(tmp->data=n)
                flag++;
            tmp=tmp->next;
        }
        if(flag!=0)
            printf("\n %d is found",n);
        else
            printf("\n %d is not found \n",n);
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
        printf("%d\t",tmp->data);
    }
}
void main()
{
    int n,ch;
    do
    {
        printf("\n choices\n");
        printf("1.Insert at first \t 2.insert at last \t 3.delete from first \t 4.delete from last \t 5.search \t 6.display \t 7.exit \n");
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
                delfirst();
                break;
            case 4:
                dellast();
                break;
            case 5:
                printf("\n Enter element to search=");
                scanf("%d",&n);
                search(n);
                break;
            case 6:
                display();
                break;
            case 7:
                break;
        }
    }while(ch!=7);
}
