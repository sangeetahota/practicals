#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*end=NULL;

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
struct node *mid(struct node *dtart,struct node *last)
{
    struct node *s,*f;
    if(s==NULL)
        return NULL;
    s=head;
    f=head->next;
    while(f!=last)
    {
        s=s->next;
        f=f->next;
    }
    return s;
}
int search(int d)
{
    struct node * start,*last,*m;
    start=head;
    last=NULL;
    do
    {
        m=mid(start,last);
        if(m==NULL)
            return 0;
        if(m->data==d)
            return 1;
        else if(m->data<d)
            start=m->next;
        else
            last=m;
    }while(last==NULL || last!=start);
    return 0;
}
void main()
{
    int c,n,i,tnp,f=0,d;
    printf("Enter no of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements=");
        scanf("%d",&c);
        create(c);
    }
    display();
    printf("\n Enter element to search=");
    scanf("%d",&d);
    f=search(d);
    if(f!=0)
        printf("%d is found\n",d);
    else
        printf("%d is not found \n",d);
}
