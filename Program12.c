// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
	float num;
	
	printf("Enter number to check whether it is positive,negative or zero: ");
	scanf("%f",&num);
	
	if(num>0)
	{
		printf("The number %0.2f is a Positive Number",num);
	}
	else if(num==0)
	{
		printf("The number entered is Zero");
		
	}
	else
	{
		printf("The number %0.2f is a Negative Number",num);
	}
	
	return 0;
}
