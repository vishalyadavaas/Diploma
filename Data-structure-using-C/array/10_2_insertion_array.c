// insertion an element at beginning of array

#include<stdio.h>
void main()
{
    int i;
    int a[10],num;
    printf("enter the element of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before inserting,element of array are:\n");
    for(i=0;i<5;i++)
    {
      printf("%d\n",a[i]);
    }
    printf("enter data which you want to insert:");
    scanf("%d",&num);
    for(i=4;i>=0;i--)
    {
      a[i+1]=a[i];
    }
    a[0]=num;
    printf("after insertion,element of array are:\n");
    for(i=0;i<6;i++)
    {
    printf("%d\t",a[i]);
    }
    
}