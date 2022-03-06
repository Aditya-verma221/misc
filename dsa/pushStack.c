#include<stdio.h>

int push(char [],int *,char,int);

int main()
{
    int n=10;
    char s[n+1];
    int top=0;
    char x,y;
    int i=100;

    while (i!=0)
    {
        printf("Enter an element to push\n");
        scanf("%c%c",&x,&y);
        i=push(s,&top,x,n);
    }
    return 0;
    
}
int push(char a[],int *t,char e,int n)
{
    if(*t>=n)
    {
        printf("stack overflow\n");
        return 0;
    }
    else
    {
        *t= *t+1;
        printf("Top is %d\n",*t);
        a[*t]=e;
        return 1;
    }
}