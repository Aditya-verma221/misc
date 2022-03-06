// copy Array
#include <stdio.h>

void main()
{
    int i, n;
	
	
       printf("\n\nCopy the elements one array into another array:-\n");
       
	   
       printf("Enter the size of the array :");
       scanf("%d",&n);
   int arr1[n], arr2[n];

       printf("Input elements in the array :\n");
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    /* Copy elements of first array into second array.*/ 
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    /* first array   */
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr1[i]);
    }

    /* second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d", arr2[i]);
    }
	       printf("\n\n");
}
