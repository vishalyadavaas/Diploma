//  1st sems result CS AND IT

#include<stdio.h>
struct student
{
    char name[30];
    int sum1s,sum2p,smarks[6],pmarks[5];
    float per;
    int ses,tsum,sca;
};
void main()
{
    struct student s;
    int i;
    printf("Enter student name :");
    scanf("%s",&s.name);
    printf("Enter sessional number :");
    scanf("%d",&s.ses);
    printf("Enter SCA number :");
    scanf("%d",&s.sca);
    printf("Enter subjects marks\n");
    s.tsum=0;
    s.sum1s=0;
    s.sum2p=0;
    s.per=0;
    for(i=0;i<6;i++)
    {
        printf(" Theory marks in subjects %d : ",i+1);
        scanf("%d",&s.smarks[i]);
        s.sum1s = s.sum1s+s.smarks[i];
    }
    printf("Total marks in subject : %d\n",s.sum1s);
    printf("Enter practical marks :\n");
    for(i=0;i<5;i++)
    {
        printf(" practical marks in subjects %d : ",i+1);
        scanf("%d",&s.pmarks[i]);
        s.sum2p = s.sum2p+s.pmarks[i];
    }
    printf("Total marks  in practical : %d\n",s.sum2p);
    s.tsum = s.sum2p + s.ses + s.sum1s + s.sca;
    s.per = (float)s.tsum/7;
    printf("Student marks details :\n");
    printf("Name : %s\n",s.name);
    printf("Total number : %d\n",s.tsum);
    printf("Percentage : %f\n",s.per);
}