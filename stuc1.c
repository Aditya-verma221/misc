#include<stdio.h>
#include<string.h>

struct student
{
    /* data */
    int sid, backlog;
    char name[20];
    float cgpa;

}s1,s2;

void main()
{
    struct student s3, s4;

    s1.sid=1;
    strcpy(s1.name,"abc");
    s1.cgpa = 6.7;
    s1.backlog=4;

    printf("Enter student id: \n");
    scanf("%d",&s2.sid);
    printf("Enter student name: \n");
    scanf("\n%s",s2.name);
    printf("Enter student cgpa: \n");
    scanf("\n%f",&s2.cgpa);
    printf("Enter student backs: \n");
    scanf("\n%d",&s2.backlog);

    printf("Student 2 details are:%d\n%s\n%f\n%d\n ",s2.sid,s2.name,s2.cgpa,s2.backlog);
}
