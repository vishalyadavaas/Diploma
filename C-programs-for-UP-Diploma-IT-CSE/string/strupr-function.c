//----------   String change into Upper case

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    printf("Enter the string :");
    gets(a);
    printf("Upper case is %s",strupr(a));
}