#include<stdio.h>
int arr[10],n;
void bubble(int n)
{
    int i,tmp;
    if(n==1)
        return;
    for(i=0;i<n-1;i++)
    {
            if(arr[i]>arr[i+1])
            {
                tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
    }
    bubble(n-1);
}
void main()
{
    int i,n;
    printf("Enter no of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("[%d]=",i+1);
        scanf("%d",&arr[i]);
    }
    bubble(n);
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}

