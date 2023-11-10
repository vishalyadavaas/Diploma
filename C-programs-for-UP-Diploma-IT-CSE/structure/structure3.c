//--------------pointer to structure---------------

#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    int age;
};

void main()
{
    struct student s;
    printf("Enter rollno :");
    scanf("%d",&s.rollno);
    printf("Enter name :");
    scanf("%s",&s.name);
    printf("Enter age :");
    scanf("%d",&s.age);
    struct student *p = &s;
    printf("Printing using pointer:\n");
    printf("Roll no - %d\n",p->rollno);
    printf("Name - %s\n",p->name);
    printf("Age - %d\n",p->age);


}