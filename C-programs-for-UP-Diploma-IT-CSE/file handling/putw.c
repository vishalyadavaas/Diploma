//--------

#include<stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("num.txt","w");
    putw(1,fp);
    fclose(fp);

}