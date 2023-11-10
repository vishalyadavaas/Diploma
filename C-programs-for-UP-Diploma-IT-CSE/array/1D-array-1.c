// element of array (take input and print)------------

#include<stdio.h>
void main()
{
    int i;
    int a[5];
    printf("Enter the element of array:\n"); 
    for(i=0;i<5;i++)
    {         
        scanf("%d",&a[i]);    
    }
    printf("Element of array are : \n");
    for(i=0;i<5;i++)
    {  
        printf("%d\n",a[i]);   
    }
}