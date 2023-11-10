// insertion an element at given index
#include<stdio.h>
void main()
{
    int i;
    int a[10],num,index;
    printf("enter the element of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before inseriton,element of array are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter data which you want to insert\n");
    scanf("%d",&num);
    printf("enter the index\n");
    scanf("%d",&index);
    for(i=4;i>=index;i--)   //skipping of element
    {
        a[i+1]=a[i];
    }
    a[index]=num;
    printf("after insertion,element of array are\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
}