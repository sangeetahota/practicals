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
}*front=NULL,*end=NULL;
struct node *create(int n)
{
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->left=NULL;
    new->right=NULL;
    new->data=n;
    return new;
}
struct node *insert(struct node *root,int n)
{
    if(root==NULL)
    {
        root=create(n);
        return root;
    }
    if(n<root->data)
        root->left=insert(root->left,n);
    if(n>=root->data)
        root->right=insert(root->right,n);
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
void enque(struct node *n)
{
    struct queue *new,*tmp;
    new=(struct queue*)malloc(sizeof(struct queue));
    new->data=n;
    new->next=NULL;
    if(front==NULL)
        front=end=new;
    else
        end->next=new;
    end=new;
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
void main()
{
int n,c;
    do
    {
        printf("choice\n");
        printf("1.create \t 2.insert \t 3.tree traversal \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                if(root==NULL)
                {
                    printf("Enter elementy=");
                    scanf("%d",&n);
                    root=create(n);
                }
                else
                    printf("Tree is available\n");
                break;
            case 2:
                printf("Enter element=");
                scanf("%d",&n);
                insert(root,n);
                break;
            case 3:
                printf("\n Inorder= \t");
                inorder(root);
                printf("\n preorder= \t");
                preorder(root);
                printf("\n postorder= \t");
                postorder(root);
                printf("\n level order=\t");
                enque(root);
                level(root);
                break;
            case 4:
                break;
        }
    }while(c!=4);
}
