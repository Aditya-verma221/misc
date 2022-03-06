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