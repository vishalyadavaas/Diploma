//  passing string as argument-------

#include<stdio.h>
void display(char[]);
void main()
{
    char a[]= "vishal";
    display(a);
}
void display(char a[])
{
    printf(" string is %s",a);
}