// C program to swap two variables using a pointer by Aditya

#include <stdio.h>


void swap(int *x1, int *y1)
{
	int temp = *x1;
	*x1 = *y1;
	*y1 = temp;
}

int main()
{
	int x, y, var;
	int *p;
	p=&var;

	printf("Address of var is=%p\n Enter Value of x and y",p);
	scanf("%d %d", &x,&y);
	swap(&x, &y);
	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}
