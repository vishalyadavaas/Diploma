// delete the element of array at beginning

#include<stdio.h>
void main()
{
    int i;
    int a[10],size;
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
 
    for(i=0;i<size-1;i++)
    {
      a[i]=a[i+1];
    }
    
    printf("after deletion,element of array are:\n");
    for(i=0;i<size-1;i++)
    {
    printf("%d\n",a[i]);
    }
}