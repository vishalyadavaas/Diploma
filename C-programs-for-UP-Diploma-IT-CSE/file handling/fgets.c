//

#include<stdio.h>
void main()
{
    FILE *fp;
    char a[20];
    fp = fopen("dis.txt","r");  
    fgets(a,15,fp);
    printf("%s",a);  
    fclose(fp);
}