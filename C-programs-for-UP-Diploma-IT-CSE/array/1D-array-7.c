//------array element sum---------------

#include<stdio.h>
void main()
{
    int i;
    int a[5],sum=0;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("Array element sum is %d",sum);
}