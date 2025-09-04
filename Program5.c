// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
	float temp_celsius,temp_fahrenheit;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f",&temp_celsius);
	
	temp_fahrenheit=(temp_celsius * 9/5)+32;
	
	printf("The temperature in Fahrenheit is: %0.2f F",temp_fahrenheit);
	
	return 0;
}
