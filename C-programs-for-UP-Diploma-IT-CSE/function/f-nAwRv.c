// --- no argument with retrun value------using sum of two numbers

#include<stdio.h>
int sum();  // function declaration
void main()
{
    int s;
    s = sum();   // function call
    printf("Sum is %d",s);
}
int sum() // function definition
{
    int a=20,b=30;
    return a+b;  // sum = a+b;
    // return sum;
}