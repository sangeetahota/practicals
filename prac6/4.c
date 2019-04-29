#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
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
    {
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=new;
    }
    count++;
}
int midnode()
{
    int cnt=0;
    struct node *tmp;
    tmp=head;
    if(head==NULL)
        printf("\n list is empty\n");
    else
    {
        while(tmp->next!=NULL)
        {
            if(cnt==(int)(count/2))
                return tmp->data;
            tmp=tmp->next;
            cnt++;
        }
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
    int tmp,i,n,ch;
    printf("enter no of nodes to enter=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements=");
        scanf("%d",&ch);
        create(ch);
    }
    printf("\n Middle node in list=%d",midnode());
    display();
}
