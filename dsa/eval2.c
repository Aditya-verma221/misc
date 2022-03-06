#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"string.h"


void main()
{
    int n=10;
    char in[10],out[10],s[10];
    int top=0;

    printf("Enter a string\n");
    scanf("%s",in);

    int i=0,j=0;

    while (in[i]!="\0")
    {
        if(isdigit(in[i]))
        {
            printf("Digit is %c\n",in[i]);
            push(s,&top,in[i],n);
        }
        else
        {
            int b=(int)pop(s,&top)-'0';
            int a=(int)pop(s,&top)-'0';
            char c=(char)(operation(a,b,in));// pop,operation are on user made library string.h
            printf("Result is %c\n");
            push(s,&top,c,n);
        }
        i++;
    }
    printf("Answer is %d\n", (int)pop(s,&top)-'0');
    
}