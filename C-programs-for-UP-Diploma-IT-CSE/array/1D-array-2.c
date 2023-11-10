//-------------taking input and print in reverse order------------
// question maybe possible it ---- Write a program to take input from user and print it reverse order--- 
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the element of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of array are :\n");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}