//--------------

#include<stdio.h>
#include<string.h>
void main()
{
   char *a[50];
   char *b;
   printf("Enter a string :");
   gets(a);
   b = strdup(a);
   printf("duplicate string : %s",b);
}