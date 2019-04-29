#include<stdio.h>

void main()
{
    int a[15],*ptr,i,s;
    s=sizeof(a)/4;
    for(i=0;i<s;i++)
    {
        printf("Enter element=");
        scanf("%d",&a[i]);
    }
    ptr=a;
    printf("size of array:%d\n",sizeof(a));
    for(i=0;i<s;i++)
    {
        printf("a[%d]=%d\n",i+1,*ptr);
        ptr++;
    }
}
