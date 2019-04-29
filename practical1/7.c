#include<stdio.h>

int sumarray(int s[][3],int n,int m);

int main()
{
    int a[2][3],i,j,n1,n2;
    n1=sizeof(a)/sizeof(a[0]);
    n2=sizeof(a[0])/sizeof(a[0][0]);
     printf("rows:%d\n",n1);
    printf("columns:%d\n",n2);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("Enter element%d:",i+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Summation of array:");
    sumarray(a,n1,n2);
return 0;
}

int sumarray(int s[][3],int n,int m)
{
    int i,sum=0,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+s[i][j];
        }
    }
        printf("%d \t",sum);
    return 0;
}
