//linear search in array

#include<stdio.h>
void main()
{
    int i;
    int a[5],data;
    printf("Enter the element of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the data which you want to search:");
    scanf("%d",&data);
    for(i=0;i<5;i++)
    {
        if(a[i]==data)
        {
            printf("data found at index : %d",i);
            break;
        }
    }
    if(i==5)
    {
        printf("data not found");
    }
}