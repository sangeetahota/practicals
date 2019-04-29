#include<stdio.h>

void *print(char *string);
int main()
{
    char str[10];
    printf("Enter string:");
    scanf("%s",str);

    print(str);
    return 0;
}

void *print(char *string)
{
    printf("\n Your entered string is:%s",string);
}
