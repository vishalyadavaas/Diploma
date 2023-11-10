//-------- *(indirection operator) and &(address operator)   --------------

#include<stdio.h>
void main()
{
    int a,*p; // pointer declaration
    printf("Enter the number :");
    scanf("%d",&a);
    p = &a; // pointer initialization
    printf("Address is : %x\n",p);   // address printing
    printf("Value is %d\n",*p);    //value printing
}