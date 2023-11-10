

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    if(a<b)
    {
        printf("a is less than b");
    }
    if(a>b)
    {
        printf("a is greater than b");
    }
    if(a==b)
    {
        printf("a is equal to b");
    }
}