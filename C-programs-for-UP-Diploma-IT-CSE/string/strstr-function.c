//----------- ek string ko kisi dhusre string me search karna---

#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50],*f;
    printf("Enter the 1st string :");
    gets(a);
    printf("Enter the string to search:");
    gets(b);
    f = strstr(a,b);
    if(f)
    {
        printf("String is found : %s",b);
    }
    else
    {
        printf("string not found");
    }
}