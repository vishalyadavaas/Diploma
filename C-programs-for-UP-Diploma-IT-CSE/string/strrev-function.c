// string ko reverse karne ke liye

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    printf("Enter the string :");
    gets(a);
    printf("Reverse string is %s",strrev(a));
}