#include<stdio.h>
#define N 30
int adj[N][N];
int n;
void main()
{
    int i,j,d,max,s,n;
    int ch,in[N],out[N];
    printf("Enter no of nodes in graph=");
    scanf("%d",&n);
    max=n*(n-1);
    for(i=1;i<=max;i++)
    {
        printf("\n o o for exit \n enter source and destination edge %d=",i);
        scanf("%d %d",&s,&d);
        if(s==0 || d==0)
            break;
        if(s>n || d>n || s<=0 || d<=0)
        {
            printf("\n Invalid edge \n");
            i--;
        }
        else
        {
            adj[s][d]=1;
        }
    }
    printf("\n");
    for(i=0;i<=n;i++)
    {
        in[i]=out[i]=0;
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                printf("[%d]\t",i+j);
            else
                printf("%d \t",adj[i][j]);
            if(adj[i][j]==1)
                out[i]++;
            if(adj[j][i]==1)
                in[i]++;
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
        printf("[%d] outdegree:%d Indegree:%d \n",i,out[i],in[i]);
}

