// using fuction -------fopen()------putc()

#include<stdio.h>
void main()
{
    FILE *fp;
    char a;
    fp = fopen("vishu.txt","w");
    printf("Enter a character :");
    a = getchar();
    putc(a,fp);
    fclose(fp);
}