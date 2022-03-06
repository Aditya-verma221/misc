#include<stdio.h>
#include<string.h>

struct student
{
    /* data */
    int sid, backlog;
    char name[20];
    float cgpa;

}s[3];

void main()
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nEnter details for student %d\n",i+1);
        printf("Enter student id: \n");
    scanf("%d",&s[i].sid);
    printf("Enter student name: \n");
    scanf("\n%s",s[i].name);
    printf("Enter student cgpa: \n");
    scanf("\n%f",&s[i].cgpa);
    printf("Enter student backs: \n");
    scanf("\n%d",&s[i].backlog);

    }
    for(i=0;i<3;i++)
    {
        printf("Student details are:%d\n%s\n%f\n%d\n ",s[i].sid,s[i].name,s[i].cgpa,s[i].backlog);

    }
}
