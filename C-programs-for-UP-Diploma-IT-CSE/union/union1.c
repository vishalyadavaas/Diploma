//--------

#include<stdio.h>
union student
{
    int rollno;
    char name[10];
    int age;
};
void main()
{
    union student u;
    scanf("%d",&u.rollno);
    scanf("%s",&u.name);
    scanf("%d",&u.age);
    printf("%d\n",u.rollno);
    printf("%s\n",u.name);
    printf("%d\n",u.age);
}
