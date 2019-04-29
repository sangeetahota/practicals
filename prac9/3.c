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
void delete(struct node *root,struct node *prev,int n)
{
    struct node *min;
    if(root==NULL)
        printf("\n Element not found");
    if(root->data==n)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(prev->data<root->data)
                prev->right=NULL;
            if(prev->data>root->data)
                prev->left=NULL;
            free(root);
        }
        else if(root->left==NULL || root->right==NULL)
        {
            if(prev->data<=root->data)
                prev->right=root->right;
            if(prev->data>root->data)
                prev->left=root->right;
            free(root);
        }
        else
        {
             if(prev->data<=root->data)
                prev->right=root->left;
            if(prev->data>root->data)
                prev->left=root->left;
            free(root);
        }
    }
    else if(root->left!=NULL && root->right!=NULL)
    {
        min=root->right;
        while(min->left !=NULL)
            min=min->left;
        root->data=min->data;
        delete(root->right,root,min->data);
    }
    else if(n<root->data)
        delete(root->left,root,n);
    else if(n>=root->data)
        delete(root->right,root,n);
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
int n,c;
    do
    {
        printf("choice\n");
        printf("1.create \t 2.display \t 3.delete \t 4.exit \n");
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
                printf("Enter the element to delete=");
                scanf("%d",&n);
                delete(root,root,n);
                break;
            case 4:
                break;
        }
    }while(c!=4);
}
