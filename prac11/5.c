#include<stdio.h>
int arr[10],n;

void search(int l,int d,int s)
{
    int i;
    while(l<=d)
    {
        i=l+(d-l)/2;
        if(arr[i]==d)
            return 1;
        if(arr[i]<d)
            l=i+1;
        else
            d=l-1;
    }
    return 0;
}
void main()
{
    int i,s,f=0;
    printf("Enter no of elements=");
    scanf("%d",&n);
    printf("Entere sorted elements \n");
    for(i=0;i<n;i++)
    {
        printf("[%d]=",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter element to search=");
    scanf("%d",&s);
    f=search(0,n-1,s);
    if(f!=0)
        printf("%d is found",s);
    else
        printf("%d is not found",s);
}
