#include<stdio.h>

int sortarray(int s[],int n);
int main()
{
    int a[5],i,n;
    n=sizeof(a)/4;
    printf("number of elements:%d\n",n);

    for(i=0;i<n;i++)
    {
        printf("Enter elements:");
        scanf("%d",&a[i]);
    }
    printf("\n Sorting of array:");
    sortarray(a,n);
return 0;
}

int sortarray(int s[],int n)
{
    int i,temp,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d \t",s[i]);
    }
    return 0;
}
