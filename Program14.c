// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
	char character;
	printf("Enter the character to check if its a Vowel or Consonant: ");
	
	if(scanf("%c", &character) == 1 && isalpha((unsigned char)character))
	{
		if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U')
		{
			printf("The character %c is a Vowel",character);
		}
		else
		{
		printf("The character %c is a consonant",character);
		}
	}
	else
	{
		printf("Enter an alphabet to continue");
	}
	return 0;
}
