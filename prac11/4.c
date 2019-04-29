#include<stdio.h>
int arr[10],n;

void search()
{
    int a,i,f=0;
    printf("Enter element you want top search=");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
            f++;
    }
    if(f!=0)
        printf("%d is found\n ",a);
    else
        printf("%d is not available\n",a);
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
    search();
}
