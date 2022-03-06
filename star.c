#include<stdio.h>
/*
int main()
{
    int i=1;
    while (i<=5)
        {
        for(int j=0;j<i;j++)
        {
            printf("*");
            
        }
        printf("\n");
        i++;
    }
    return 0;
}
int main()
{
    char c="5";
    int a= 5;
    printf("%d",c+a);
}*/

void adderBYref(int*,int*);

void main(){
    int a=4,b=3;
    printf("%d,%d\n",a,b);
    adderBYref(&a,&b);
    printf("%d,%d\n",a,b);
}

void adderBYref(int*x,int*y){
    int temp;
    temp = *x+*y;
    *y= *x-*y;
    *x = temp;
}