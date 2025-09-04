// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
	int num1,num2,num3;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the sedcond number: ");
	scanf("%d",&num2);
	printf("Enter the third number: ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("%d is the largest among the three given numbers.",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("%d is the largest among the three given numbers.",num2);
	}
	else 
	{
		printf("%d is the largest among the three given numbers.",num3);
	}
	
	
	return 0;
}
