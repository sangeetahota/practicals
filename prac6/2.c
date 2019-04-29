#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int n)
{
    struct node*new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=n;
    new->next=NULL;
    if(top!=NULL)
        new->next=top;
    top=new;
}
void pop()
{
    struct node *tmp;
    if(top==NULL)
        printf("\n list is empty");
    else
    {
        tmp=top;
        top=top->next;
        printf("\n Deleted data=%d\n",tmp->data);
        free(tmp);
    }
}
void peep(int n)
{
    int flag=0;
    struct node *tmp;
    if(top==NULL)
        printf("\n list is empty\n");
    else
    {
        tmp=top;
        while(tmp!=NULL)
        {
            if(tmp->data==n)
                flag++;
            tmp=tmp->next;
        }
        if(flag!=0)
            printf("\n %d is found \n",n);
        else
            printf("\n %d is not found \n",n);
    }
}
void display()
{
    struct node *tmp;
    tmp=top;
    if(top==NULL)
        printf("\n list is empty\n");
    else
    {
        printf("\n elements\n");
        while(tmp->next!=NULL)
        {
            printf("%d\n",tmp->data);
            tmp=tmp->next;
        }
        printf("%d\n",tmp->data);
    }
}
void main()
{
    int n,ch,i;
    do
    {
        printf("\n choices\n");
        printf("1.push 2.pop 3.peep 4.display 5.exit \n");
        printf("Enter your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter a element for push=");
                scanf("%d",&n);
                push(n);
                display();
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Enter a number for searchg=");
                scanf("%d",&i);
                peep(i);
                break;
            case 4:
                display();
                break;
            case 5:
                break;
        }
    }while(ch!=5);
}
