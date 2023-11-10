//-------- array of union--------------

#include<stdio.h>
union student
{
    int rollno;
    char name[30];
    int age;
};
void main()
{
    union student u[2];
    int i;
    printf("Enter students details :\n");
    for(i=0;i<2;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter the roll no :");
        scanf("%d",&u[i].rollno);
        printf("Enter Name :");
        scanf("%s",&u[i].name);
        printf("Enter age :");
        scanf("%d",&u[i].age);
    }
    printf("Students details :\n");
    for(i=0;i<2;i++)
    {
        printf("Student %d\n",i+1);
        printf("Roll no - %d\n",u[i].rollno);
        printf("Name - %s\n",u[i].name);
        printf("Age - %d\n",u[i].age);
    }
}

