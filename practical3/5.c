#include<stdio.h>
void thanoi(int n,char f,char l,char t);

void main()
{
    int n;
    printf("Enter number of disks:");
    scanf("%d",&n);
    thanoi(n,'A','C','B');
}

void thanoi(int n,char f,char l,char t)
{
    if(n==1)
    {
        printf("\n move disk 1 from %c to %c",f,l);
        return;
    }
    thanoi(n-1,f,t,l);
    printf("\n Move disk %d from %c to %c",n,f,l);
    thanoi(n-1,t,l,f);
}
