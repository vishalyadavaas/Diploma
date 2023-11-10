#include<stdio.h>
void main()
{
    int i,a[5];
    printf("enter the element of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element are :\n");
    for(i=0;i<=4;i++)
    {
       printf("%d\n",a[i]);
    }
    printf("Reverse order is :\n");
    for(i=4;i>=0;i--)
    {
       printf("%d\n",a[i]);
    }
}