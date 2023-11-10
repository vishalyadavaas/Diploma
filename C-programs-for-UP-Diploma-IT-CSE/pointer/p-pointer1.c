// --- pointer to pointer (double pointer)----------
// double pointer means ek pointer dhusre pointer ka address strore karega

#include<stdio.h>
void main()
{
    int a;
    int *p=&a;
    int **q=&p;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("value is %d\n",a);
    printf("single pointer is %d\n",*p);
    printf("double pointer is %d\n",*(*q));
}