#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    for(i=n-1;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array is: ");
    for(i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
}