// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
/*
   90-100: Grade A 
   80-89: Grade B 
   70-79: Grade C 
   60-69: Grade D 
   below 60: Grade F. 
*/

#include<stdio.h>
int main()
{
	int per;
	printf("Enter your percentage %d",per);
	scanf("%d",&per);
	
	if (per>=95 && per<=100)
	printf("GRADE A");
	
	if (per>=80 && per<=94)
	printf("GRADE B");
	
	if (per>=70 && per<=79)
	printf("GRADE C");
	
	if (per>=51 && per<=69)
	printf("GRADE D");
	
	if (per<=50)
	printf("GRADE F");
	
	return 0;
	
}
