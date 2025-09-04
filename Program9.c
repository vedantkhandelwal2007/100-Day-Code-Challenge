// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	 float principal,rate,time,simple_interest,compound_interest;
	 printf("Enter Principal amount: ");
	 scanf("%f",&principal);
	 
	 printf("Enter Rate of interest: ");
	 scanf("%f",&rate);
	 
	 printf("Enter Time period: ");
	 scanf("%f",&time);
	 
	 simple_interest=(principal*rate*time)/100;
	 
	 compound_interest=principal* (pow((1+rate/100),time)) - principal;
	 
	 printf("The amount of Simple interest is: %0.2f",simple_interest);
	 printf("The amount of Compound interest is: %0.2f",compound_interest);
	
	return 0;
}
