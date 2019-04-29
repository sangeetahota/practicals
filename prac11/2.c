#include<stdio.h>
int arr[10],n;
void selection()
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr[j]<arr[i])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}
void main()
{
    int i;
    printf("Enter no of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("[%d]=",i+1);
        scanf("%d",&arr[i]);
    }
    selection();
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
