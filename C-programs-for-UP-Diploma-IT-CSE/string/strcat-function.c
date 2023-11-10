//WAP to add two string........

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50];
    printf("Enter 1st string :");
    gets(a);
    printf("Enter 2nd string :");
    gets(b);
    printf("complete string is : %s ",strcat(a,b));
}