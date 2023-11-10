//-----------find smallest element-------

#include<stdio.h>
void main()
{
    int i;
    int a[5],smallest=0;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest = a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<smallest)
        smallest = a[i];
    }
    printf("smallest element is %d",smallest);
}