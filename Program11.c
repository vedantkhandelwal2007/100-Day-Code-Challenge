// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
	int num;
	printf("Enetr value of the number to check if its even or odd: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The number %d is an Even number",num);
	}
	else
	{
		printf("The number %d is an Odd number",num);
	}
	
	return 0;
}
