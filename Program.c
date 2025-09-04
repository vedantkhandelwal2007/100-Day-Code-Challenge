// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
	float num1,num2,sum,difference,product,quotient;
	
	printf("Enter value of first number: ");
	scanf("%f",&num1);
	printf("Enter value of second number: ");
	scanf("%f",&num2);
	
	sum=num1+num2;
	if(num1>num2)
	{
		difference=num1-num2;
	}
	else
	{
		difference=num2-num1;
	}
	product=num1*num2;
	
	quotient=num1/num2;
	
	printf("The sum of the given two numbers are: %0.2f\n",sum);
			
	printf("The difference of the given two numbers are: %0.2f\n",difference);
		
	printf("The product of the given two numbers are: %0.2f\n",product);
		
	printf("The quotient of the given two numbers are: %0.2f\n",quotient);
	
	return 0;
}
