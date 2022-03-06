#include<stdio.h>

void random(int *, int *);

void main()
{
    int a= 10,b=20;
    printf("before call a= %d and b= %d\n",a,b);
    random(&a,&b);
    printf("After call a=%d and b=%d\n",a,b);
}

void random(int *x, int *y)
{
    *x=12;
    *y= 17;
}