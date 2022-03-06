/* 2. Count the number of even and odd elements in an array. Code by Aditya Verma. */
#include<stdio.h>
int main()
{

int n,count_odd =0, count_even = 0;
printf("Enter size: ");
scanf("%d",&n);
int arr[n];
for(int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}

for(int i = 0; i < n; i++)
{
if(arr[i] % 2 == 1)
count_odd++;
else
count_even++;
}
printf("Odd: %d",count_odd);
printf("\nEven: %d",count_even);
return 0;
}


