//------

#include<stdio.h>
void main()
{
    FILE *fp;
    int a;
    fp = fopen("int.txt","rb");
    a = getw(fp);
    printf("%d",a);
    fclose(fp);
}
