#include<stdio.h>

void main()
{
    FILE *studata;
    char c[50];

    studata = fopen("student_data.txt","w");

    printf("Enter student name and marks: ");
    scanf("%s",c);
    printf("%s",c);
    fprintf(studata,"%s",c);
    fclose(studata);

}