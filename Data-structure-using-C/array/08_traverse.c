#include<stdio.h>
void main()
{
    int i,a[5];
    printf("enter the element of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Traverse of array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}