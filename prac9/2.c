#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

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
int search(struct node *root,int n)
{
    if(root==NULL)
        return 0;
    if(root->data==n)
        return 1;
    else if(n<root->data)
        search(root->left,n);
    else if(n>=root->data)
        search(root->right,n);
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
void main()
{
int n,c,t=0;
    do
    {
        printf("choice\n");
        printf("1.create \t 2.display \t 3.search \t 4.exit \n");
        printf("enter your choice=");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                if(root==NULL)
                {
                    printf("Enter element=");
                    scanf("%d",&n);
                    root=create(n);
                }
                else
                {
                    printf("Enter element=");
                    scanf("%d",&n);
                    insert(root,n);
                }
                break;
            case 2:
                printf("\n Tree\n");
                inorder(root);
                break;
            case 3:
                printf("Enter element to search=");
                scanf("%d",&n);
                t=search(root,n);
                if(t!=0)
                    printf("\n %d is found in tree \n",n);
                else
                    printf("\n %d is not found in tree \n",n);
                break;
            case 4:
                break;
        }
    }while(c!=4);
}
