//--------

#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s;
    scanf("%d",&s.rollno);
    scanf("%s",&s.name);
    scanf("%f",&s.marks);
    printf("%d\n",s.rollno);
    printf("%s\n",s.name);
    printf("%f\n",s.marks);
}
