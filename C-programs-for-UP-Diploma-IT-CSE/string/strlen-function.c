//---- WAP to find the length of a string------

#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    printf("Enter your name :");
    gets(name);
    printf("String length is %d",strlen(name));
}