#include<stdio.h>

void main()
{
    int age;
    int b;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("(if you have driving licence then enter 1 , else enter any number) Driving licence :");
        scanf("%d",&b);
        printf("You are eligible to drive a car \n");
        if(b==1)
        {
            printf("Great you can drive a car\n");
        }
        else
        {
            printf(" but you do not have a driving licence\n");
        }
    }
    else
     {
        printf("you can not drive a car");
     }
}