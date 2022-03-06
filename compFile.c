#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    FILE *fp1, *fp2;
    char a,b;
    int flag=0;
    fp1= fopen("cmp1.txt","r");
    fp2= fopen("cmp2.txt","r");

    while(!feof(fp1))
    {
        a=getc(fp1);
        b=getc(fp2);
        if(a!=b)
        {
            flag=1;
            break;
            
        }
    }
    char c;
    c=getc(fp2);
    if(flag==0&& c==EOF)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
}