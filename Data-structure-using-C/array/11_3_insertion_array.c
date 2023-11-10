// insertion an element at end of array

#include<stdio.h>
void main()
{
    int i;
    int a[10],num;
    printf("Enter the element of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before insertion, element of array are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the data which you want to insert :");
    scanf("%d",&num);
    a[5]=num;
    printf("after insertion,element of array are :\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }

}