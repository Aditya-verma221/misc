#include<stdio.h> 
int main() 
{ int r=3, c=3,i,j, Pos=0, Neg=0, Z=0; 
int arr[r][c]; 
printf("Enter the values of 3x3 array:\n"); 
for(i=0;i<r;i++) { for(j=0;j<c;j++) 
{ scanf("%d",&arr[i][j]); 
if(arr[i][j] > 0) 
{ Pos++; } 
else if(arr[i][j] < 0) 
{ Neg++; } 
else 
{ Z++; } } } 
printf("Number of zeroes are %d\n",Z); 
printf("Number of positive elements are %d\n",Pos); 
printf("Number of negative elements are %d\n",Neg); 
return 0; }