//---Wap to copying a string to another string-----

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    printf("Enter the string :");
    gets(a);
    strcpy(b,a);
    printf("string is : %s",b);
}