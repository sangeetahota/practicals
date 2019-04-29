#include<stdio.h>
int arr[10],n;
void bubble()
{
    int i,j,tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
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
    bubble();
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
