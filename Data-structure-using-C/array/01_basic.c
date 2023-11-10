#include<stdio.h>
void main()
{
    int i,a[5];
    printf("enter the element of array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element are :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}