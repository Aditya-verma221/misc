#include<stdio.h>
#include<string.h>
#include"string.h"

char chkoprator(char);
int main()
{
   int top=0;
   char sta[]="a+b-c*d+e";
   int n= strlen(sta)+1;
   char str[n-1];
   char out[20];
   int flag=0;