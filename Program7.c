// Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
	int num1,num2;
	
	printf("Enter value of the first number: ");
	scanf("%d",&num1);
	
	printf("Enter value of the second number: ");
	scanf("%d",&num2);
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	printf("The value of the first number now is: %d \n",num1);
	printf("The value of the second number now is: %d",num2);
	
	
	
	
	return 0;
}
