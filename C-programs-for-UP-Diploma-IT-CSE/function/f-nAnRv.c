//--------no agrument no return value--------- using sum of two number--------

#include<stdio.h>
void sum();  // function declaration
void main()
{
    sum(); // function call
}
void sum() // function definition
{
    int a=10,b=20;
    printf("Sum is %d",a+b);
}