// getc() function

#include<stdio.h>
void main()
{
    FILE *fp;
    char a;
    fp = fopen("vishu.txt","r");
    while((a=getc(fp))!=EOF)
    {
        printf("%c",a);
    }
    fclose(fp);
}