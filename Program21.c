// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
	float cost_price,selling_price,profit_or_loss;
	
	printf("Enter Cost price: ");
	scanf("%f",&cost_price);
	
	printf("Enter Selling price: ");
	scanf("%f",&selling_price);

	if(cost_price>selling_price)
	{
		profit_or_loss=((cost_price-selling_price)/cost_price)*100;
		printf("Loss percentage is: %0.2f",profit_or_loss);
			
	}	
	else if(cost_price<selling_price)
	{
	
		profit_or_loss=((selling_price-cost_price)/cost_price)*100;
		printf("Profit percentage is: %0.2f",profit_or_loss);
	}
	
	else if(cost_price==selling_price)
	{
		
	}
	else
	{
		printf("Invalid Input");
	}
	
	return 0;
}
