//----WAP to read two arrays of size 5 & store sum of these arrays into third array-----

#include<stdio.h>
void main()
{
    int i;
    int a[5],b[5],c[5];
    printf("Enter the first array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<5;i++)
    {
        c[i] = a[i]+b[i];
        printf("sum array element at index[%d] = %d\n",i,c[i]);
    }
    
}