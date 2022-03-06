#include<stdio.h>

void main()
{
    int num1,num2,*p,*q;
    p= &num1;
    q= &num2;
    printf("Enter two numbers to add=");
    scanf("%d %d",&num1,&num2);

    printf("\nSum =%d \n",*p+*q);

}