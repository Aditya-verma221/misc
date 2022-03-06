#include <stdio.h>
#include<string.h>
#include "string.h"

 


 
void main()
{
    int top=0, flag=1;
    char str[]= "bcaaaacb";
    int n = strlen(str);
    char a[(n+1)/2];
    
    for(int i=1;i<(n+1)/2;i++)
    {
        push(a, str[i-1],&top,(n-1)/2);
    }

    for (int i=(n+1)/2;i<n;i++)
    {
        if (pop(a,&top)==str[i])
        {
            flag= flag+1;
        }
    }
    if(flag==(n+1)/2)
    {
        printf("Pallindrome\n");
    }
    else
    {
        printf("Not pallindrome\n");
    }
}
        