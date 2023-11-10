//------------

#include<stdio.h>
#include<string.h>
void main()
{
    int c;
    char a[30],b[30];
    printf("Enter the 1st string :");
    gets(a);
    printf("Enter the 2nd string :");
    gets(b);
    c=strcmp(a,b);
    printf("compearing is %d",c);
}