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
void display(struct node *root)
{
    if(root!=NULL)
    {
        display(root->left);
        display(root->right);
        printf("%d\t",root->data);
    }
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
    display(root);
}
