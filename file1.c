#include<stdio.h>

void main()
{
    FILE *fp;
    char hld[30];
    fp = fopen("hello.txt","r");
   // fprintf(fp,"Hello hari\n");
    fscanf(fp,"%s",hld);
    printf("File contains %s \n",hld);
    fclose(fp);
}