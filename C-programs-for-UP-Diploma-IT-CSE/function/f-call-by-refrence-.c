// call by refrence (function calling)-------

#include<stdio.h>
void swap(int*,int*); //function declaration
void main()
{
    int a=10;
    int b=20;
    printf("Before swap a = %d\n",a);
    printf("Before swap b = %d\n",b);
    swap(&a,&b); // function call      // actual parameter
    printf("after swap a = %d\n",a);             // change in actual parameter
    printf("after swap b = %d\n",b);             // change in actual parameter
}
void swap(int *a,int*b) // function definition       /formal parameter/
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}