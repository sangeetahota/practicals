#include<stdio.h>
#define N 30
int adj[N][N],visited[N];
int n;
void dfs(int i)
{
    int j;
    printf("%d\t",i);
    visited[i]=1;
    for(j=1;j<=n;j++)
    {
        if(visited[j]==0 && adj[i][j]==1)
            dfs(j);
    }
}
void main()
{
    int i,j,max;
    int a;
    printf("Enter no of nodes in graph=");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(i=1;i<n;i++)
    {
       visited[i]=0;
       for(j=1;j<=n;j++)
            scanf("%d",&adj[i][j]);
    }
    printf("\n Enter first node for visit=");
    scanf("%d",&a);
    dfs(a);
    printf("\n");
}
