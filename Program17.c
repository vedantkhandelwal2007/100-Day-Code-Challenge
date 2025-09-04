// Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
	float marks;
	
	printf("Enter Marks obtained by student: ");
	scanf("%f",&marks);
	
	if(marks>0 && marks<=50)
	{
		printf("Grade F");
	}
	else if(marks>50 && marks<=60)
	{
		printf("Grade E");
	}
	else if(marks>60 && marks<=70)
	{
		printf("Grade D");
	}
	else if(marks>70 && marks<=80)
	{
		printf("Grade C");
	}
	else if(marks>80 && marks<=90)
	{
		printf("Grade B");
	}
	else if(marks>90 && marks<=100)
	{
		printf("Grade A");
	}
	else
	{
		printf("Enter correct marks");
	}
	return 0;
	
}
