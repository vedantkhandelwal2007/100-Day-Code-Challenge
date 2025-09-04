// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
	int year;
	
	printf("Enter Year to find if its a leap year: ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("The Year %d is a Leap Year",year);
	}
	else
	{
		printf("The Year %d is a Leap Year",year);
	}
	return 0;
}
