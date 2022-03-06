#include<stdio.h>

void main()
{
    int ba,i,j,c,n,m;

    printf("Enter base address, index(i,j), size, row(0 if column major and vice versa) and column: \n");
    scanf("%d%d%d%d%d%d",&ba,&i,&j,&c,&n,&m);

    if(n==0)
    {
    printf("Address is: %d\n",ba+((i-1)*m+(j-1))*c);
    }
    else
    {
        printf("Address is: %d\n",ba+((j-1)*n+(i-1))*c);
    }
}