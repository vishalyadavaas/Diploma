#include<stdio.h>
void main()
{
    char operator;
    int a,b;
    printf("Enter a operator(+,-,*,/,) :");
    scanf("%c",&operator);
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    switch(operator)
    {
        case '+':
        printf("%d+%d = %d",a,b,a+b);
        break;
        case '-':
        printf("%d-%d = %d",a,b,a-b);
        break;
        case '*':
        printf("%d*%d = %d",a,b,a*b);
        break;
        case '/':
        printf("%d/%d = %d",a,b,a/b);
        break;
        default:
        printf("Invalid operator!!!");
    }
}