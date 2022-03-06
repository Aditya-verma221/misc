#include<stdio.h>
#include<string.h>
#include"string.h"

char chkoprator(char);
int main()
{
   int top=0;
   char sta[]="562-+";
   int n= strlen(sta)+1;
   char str[n-1];
   
   int flag=0;


    for(int i=0;i<n;i++)
   {
       if(chkoprator(sta[i])==0)
       {
           push(str,*top,sta[i],n);
       }
       else
       {
           if(sta[i]=="+")
           {
               push(str,*top,sta[i],n);
           }
       }
   }

}



char chkoprator(char a)
{
    char[5]= "+-*/";
    int precedence;
    if(a=="+")
    {precedence=1;
    return precedence;}
    else if(a=="-")
    {precedence=1;
    return precedence;}
    else if(a=="*")
    {precedence=2;
    return precedence;}
    else if(a=="/")
    {precedence=2;
    return precedence;}

    else
    {return 0;}
    
    
    
    
    /*for(int i = 0;i<5;i++)
    {
        if(char[i]==a)
        {return 1;
        break;
        }
        else
        {return 0;}*/

    }
}