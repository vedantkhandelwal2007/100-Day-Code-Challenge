// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
	int day;
	printf("Enter number to display respective day of the weeek: ");
	scanf("%d",&day);
	
	if (day>=1 && day<=7)
	{
		switch(day)
		{
		case 1:
		printf("Monday"); break;
        case 2:
		printf("Tuesday"); break;
        case 3:
		printf("Wednesday"); break;
        case 4:
		printf("Thursday"); break;
        case 5:
		printf("Friday"); break;
        case 6:
		printf("Saturday"); break;
        case 7:
		printf("Sunday"); break;

		}
	}
	else
	{
		printf("Enter valid number to display day.");
	}
	return 0;
}
