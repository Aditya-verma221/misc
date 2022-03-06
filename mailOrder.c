#include <stdio.h>


int main()
{
	int quantity = 0,product = 0,inp=0;

	float unitPrice = 0.0;
	float total = 0.0;

	// Collect the product number
	printf("Enter product number (1-5) or 0 to quit: ");
	scanf("%d",&product);

	
	while ((product > 0) && (product <= 5)&&(inp<4)) {
		printf("Enter quantity: ");
		scanf("%d",&quantity);
        

		// Based on product number, set unitPrice
		switch(product) {
			case 1:
				unitPrice = 29.5;
				break;
			case 2:
				unitPrice = 45.0;
				break;
			case 3:
				unitPrice = 49.0;
				break;
			case 4:
				unitPrice = 95.5;
				break;
			case 5:
				unitPrice = 68.5;
				break;
			default:
				break;
		}
		
	
		total += (unitPrice * quantity);


		printf( "Enter product number (1-5) or 0 to quit: ");
		scanf("%d",&product);
        inp++;
	}

	printf("\nTotal is: Rs%f\n\n",total);
}
