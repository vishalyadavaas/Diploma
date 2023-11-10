//-------string me character ko search karna-------

#include<stdio.h>
#include<string.h>
void main()
{

    char a[50],ch,*f;
    printf("Enter the string :");
    gets(a);
    printf("Enter a chracter to search :");
    scanf("%c",&ch);
    f = strchr(a,ch);
    if(f)
    {
        printf("Character is found : %c",ch);
    }
    else
    {
        printf("character not found");
    }


}