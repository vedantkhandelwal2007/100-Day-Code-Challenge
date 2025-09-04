// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
	char ch;
	printf("Enter a character to check if it is in Upper-Case,Lower-case or a Special-character: ");
	
	if(scanf("%c",&ch)==1 && isalpha((unsigned char)ch))
	{
		if((isupper((unsigned char)ch)))
		{
			printf("The entered character is in Upper Case.");
		}
		else if((islower((unsigned char)ch)))
		{
			printf("The entered character is in Lower Case.");
		}
		else
		{
			printf("The entered character is a Special character.");
		}
	}
	else
	{
		printf("The entered value is a Digit");
	}
	return 0;
}
