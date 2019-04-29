#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char snm[10];
    int sem;
    int javam;
    int ds;
    int cpp;
    float per;
}st[5];

void add(struct student stud[],int n);
void display(struct student stud[],int n);

int main()
{
    int n=sizeof(st)/sizeof(st[0]);
    printf("Total number of students: %d\n",n);
    add(st,n);
    display(st,n);
}
void add(struct student stud[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&stud[i].roll);
        printf("Enter name:");
        scanf("%s",&stud[i].snm);
        printf("Enter sem:");
        scanf("%d",&stud[i].sem);
        printf("Enter java marks:");
        scanf("%d",&stud[i].javam);
        printf("Enter ds marks:");
        scanf("%d",&stud[i].ds);
        printf("Enter cpp marks:");
        scanf("%d",&stud[i].cpp);
        stud[i].per=((((float)stud[i].javam+(float)stud[i].ds+(float)stud[i].cpp)*(float)100)/(float)300);
    }
}

void display(struct student stud[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n roll no of student%d is :%d \n",i+1,stud[i].roll);
        printf("name of student %d is :%s \n",i+1,stud[i].snm);
        printf("semester of student%d is :%d\n",i+1,stud[i].sem);
        printf("java marks is :%d\n",stud[i].javam);
        printf("ds marks is :%d\n",stud[i].ds);
        printf("cpp marks is :%d\n",stud[i].cpp);
        printf("percentage is :%.2f\n",stud[i].per);
    }
}
