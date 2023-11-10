//delete the element of array at given index

#include<stdio.h>
void main()
{
    int i;
    int a[10],size,index;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before deletion,element of array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("form which index you want to delete:");
    scanf("%d",&index);
    if(index<=0||index>size)
    {
        printf("Invalid index");
    }
    else
    {
        for(i=index;i<size-1;i++)
        {
          a[i]=a[i+1];
        }
    }
    printf("after deletion,element of array are:\n");
    for(i=0;i<size-1;i++)
    {
    printf("%d\n",a[i]);
    }
}