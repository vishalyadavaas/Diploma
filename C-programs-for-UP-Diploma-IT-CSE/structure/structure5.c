//

#include<stdio.h>
struct student
{
    char name[30];
    int sum,marks[3];
    float avg;
};
void main()
{
    struct student s;
    int i;
    printf("enter name :");
    scanf("%s",&s.name);
    printf("Enter student marks details :\n");
    s.sum=0;
    for(i=0;i<3;i++)
    {
        printf("marks in subject %d :",i+1);
        scanf("%d",&s.marks[i]);
        s.sum = s.sum+s.marks[i];
    }
    s.avg = s.sum/3;
    printf("Students mark details :\n");

    printf("Name - %s\n",s.name);
    printf("Total marks - %d\n",s.sum);
    printf(" average - %f",s.avg);
}

