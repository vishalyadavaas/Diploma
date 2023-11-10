//table using do while loop

#include<stdio.h>
void main()
{
  int a,b=1;
  printf("enter the number:");
  scanf("%d",&a);
  do
  {
    printf("%d*%d = %d\n",a,b,a*b);
    b++;
  }
  while (b<=10);
}
  