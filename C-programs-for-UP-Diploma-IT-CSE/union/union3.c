//--------------pointer to union---------------

#include<stdio.h>
union student
{
    int rollno;
    char name[30];
    int age;
};

void main()
{
    union student u;
    printf("Enter rollno :");
    scanf("%d",&u.rollno);
    printf("Enter name :");
    scanf("%s",&u.name);
    printf("Enter age :");
    scanf("%d",&u.age);
    union student *p = &u;
    printf("Printing using pointer:\n");
    printf("Roll no - %d\n",p->rollno);
    printf("Name - %s\n",p->name);
    printf("Age - %d\n",p->age);


}