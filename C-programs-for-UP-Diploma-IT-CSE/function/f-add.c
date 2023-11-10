// -------addition of two numbers--------

#include<stdio.h>
void sum()  // function definition
{
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Sum is : %d",a+b);
}
void main()
{
    int i;
    for(i=1;i<=2;i++)
   {
        sum();  // function call
        printf("\n");
    }
    
}