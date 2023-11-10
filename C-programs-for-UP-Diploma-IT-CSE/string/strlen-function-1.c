//----------find string length without using strlen() function-----

#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,length=0;
    char name[30];
    printf("Enter String :");
    gets(name);
    while(name[i]!='\0')
    {
        length++;
        i++;
    }
    printf(" string length : %d",length);
}