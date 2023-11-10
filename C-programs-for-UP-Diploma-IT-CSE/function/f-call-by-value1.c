//    call by value 

#include<stdio.h>
void abc(int,int);  // function declaration
void main()
{
    int a =30,b =40;
    abc(a,b);  // function call
    printf("a = %d , b = %d\n",a,b);  // no change in actual parameter
}
void abc(int a,int b)   // function definition
{
    a =40, b= 30;
    printf("a = %d , b = %d\n",a,b);
}