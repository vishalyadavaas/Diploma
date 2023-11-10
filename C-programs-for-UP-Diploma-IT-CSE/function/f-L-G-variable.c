//------Global and local Variable-------

#include<stdio.h>
int a=10,b=20;  //global variable
void abc();
void main()
{
    int c = 30; // local variable
    printf("Addtion is %d\n",a+c);
    abc();
}
void abc()
{
    printf("Sum is %d",a+b);
}