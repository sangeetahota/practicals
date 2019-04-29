#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

struct queue
{
    struct node *data;
    struct queue *next;
}*front=NULL;
struct node *create(int n)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->left=NULL;
    new->right=NULL;
    new->data=n;
    return new;
}
void enque(struct node *n)
{
    struct queue *new,*tmp;
    new=(struct queue*)malloc(sizeof(struct queue));
    new->data=n;
    new->next=NULL;
    if(front==NULL)
        front=new;
    else
    {
        tmp=front;
        while(tmp->next!=NULL)
            tmp=tmp->next;
       tmp->next=new;
    }
}
struct node * deque()
{
   struct queue *tmp;
   if(front!=NULL)
        {
            tmp=front;
            front=front->next;
            printf("%d\t",tmp->data->data);
            free(tmp);
        }
        return NULL;
}
void level(struct node *root)
{
    if(root!=NULL)
    {
        if(root->left!=NULL)
            enque(root->left);
        if(root->right!=NULL)
            enque(root->right);
        deque();
        if(front!=NULL)
            level(front->data);
    }
    return;
}
int main()
{
    root=create(8);
    root->left=create(3);
    root->left->left=create(1);
    root->left->right=create(6);
    root->right=create(10);
    root->right->left=create(9);
    root->right->right=create(15);
    enque(root);
    level(root);
}
