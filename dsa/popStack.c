#include<stdio.h>

int push(char [],int *,char,int);
char pop(char[], int*);
char peep(char [],int*,int );
int change(char [],int*,char , int )

int main()
{
    int n=10;
    char s[n+1];
    int top=0;
    char x;
    int i,op=0;

    while (op<4)
    {
        printf("Enter 1 to push\n 2 to pop \n 3 to peep\n 4 to quit");
        scanf("%d",&op);
        
        switch (op)
        {
        case 1:
            printf("Enter an element to push\n");
            scanf("\n%c",&x);
            push(s,&top,x,n);
            break;
        case 2:
            printf("%c will be popped\n",pop(s, &top));
            break;
        case 3:
            printf("Enter position\n");
            scanf("%d",&i);
            printf("value stored at %d is %c\n",i,peep(s,&top,i));
            break;
        case 4:
            printf("Enter position and character\n");
            scanf("%d %c",&i,&x);
            peep(s,&top,x,i);
            break;    
        }
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
char pop(char a[],int *t)
{
    if(*t==0)
    {
        printf("Stack underflow\n");
        return 0;
    }
    else 
    {
        *t= *t-1;
        return a[*t+1];
    }
}
char peep(char a[],int *t,int i)
{
	if(*t-i+1<=0)
    {
        printf("Underflow\n")
        return 0;
    }
    else
    {
        return a[*t-i+1];
    }
}
int change(char a[],int *t,char e, int i)
{
    if(*t-i+1<=0)
    {
        printf("Underflow\n")
        return 0;
    }
    else{
        a[*t-i+1]=e;
        return 1;
    }
}