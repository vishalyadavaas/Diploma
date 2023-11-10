//-------- array of structure--------------

#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    int age;
};
void main()
{
    struct student s[2];
    int i;
    printf("Enter students details :\n");
    for(i=0;i<2;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter the roll no :");
        scanf("%d",&s[i].rollno);
        printf("Enter Name :");
        scanf("%s",&s[i].name);
        printf("Enter age :");
        scanf("%d",&s[i].age);
    }
    printf("Students details :\n");
    for(i=0;i<2;i++)
    {
        printf("Student %d\n",i+1);
        printf("Roll no - %d\n",s[i].rollno);
        printf("Name - %s\n",s[i].name);
        printf("Age - %d\n",s[i].age);
    }
}

