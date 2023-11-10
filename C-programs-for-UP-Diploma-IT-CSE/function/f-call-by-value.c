// call by value(function calling)

#include<stdio.h>
void swap(int,int); // function declaration
void main()
{
    int a=10;
    int b=20;
    printf("Before swap a = %d\n",a);
    printf("Before swap b = %d\n",b);
    swap(a,b); // function calling        // actual parameter
    printf("after swap a = %d\n",a);       // no change in actual parameter
    printf("after swap b = %d\n",b);       // no change in actual parameter
}
void swap(int a,int b)  // function definition        //formal parameter
{
    int c;
    c = a;
    a = b;
    b = c;
   // printf("swap a = %d\n",a);
   //printf("swap b = %d\n",b);
}