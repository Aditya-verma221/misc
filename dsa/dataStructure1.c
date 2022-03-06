#include<stdio.h>

void main()
{
    int ba,i,c;

    printf("Enter base address, index and size: \n");
    scanf("%d%d%d",&ba,&i,&c);

    printf("Address is: %d",ba+(i+1)*c);
}
