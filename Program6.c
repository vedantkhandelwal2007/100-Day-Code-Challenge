// Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
	int num1,num2,num3;
	
	printf("Enter value of first number: ");
	scanf("%d",&num1);
	
	printf("Enter value of second number: ");
	scanf("%d",&num2);
	
	num3=num1+num2;
	num2=num3-num2;
	num1=num3-num2;
	
	printf("The value of the first number now is: %d \n",num1);
	printf("The value of the second number now is: %d",num2);
	
	
	return 0;
}
