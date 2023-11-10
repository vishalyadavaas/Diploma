// fopen() function

#include<stdio.h>
void main()
{
    FILE *fp;
    char abc[50];
    fp = fopen("ram.txt","w");
    printf("Enter a string :");
    gets(abc);
    fputs(abc,fp);
    fclose(fp);
    
}