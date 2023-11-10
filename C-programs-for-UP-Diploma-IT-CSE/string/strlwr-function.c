//------string change into lower case

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    printf("Enter the string :");
    gets(a);
    printf("lower case is %s",strlwr(a));
}