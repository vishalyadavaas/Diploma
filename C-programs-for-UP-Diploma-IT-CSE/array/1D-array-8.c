//----find largest element-----------

#include<stdio.h>
void main()
{
    int i;
    int a[5],largest=0;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
       if(a[i]>largest)
       largest = a[i];
    }
    printf("Largest element is %d",largest);
}