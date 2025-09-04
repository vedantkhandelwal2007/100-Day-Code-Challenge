// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main() {
	int month,year;
	
	printf("Enter Month of the year to see corresponding month and number of days: ");
	scanf("%d",&month);
	
	printf("Enter Year: ");
	scanf("%d",&year);
	
	if(month>=1 && month<=12)
	{
		switch(month)
		{
			case 1:
				printf("Januray,31");
				break;
			case 2:
				if(year%4==0)
				{
					printf("February,29");
					break;
				}
				else
				{
					printf("February,28");
					break;
				}
			case 3:
				printf("March,31");
				break;
			case 4:
				printf("April,30");
				break;
			case 5:
				printf("May,31");
				break;
			case 6:
				printf("June,30");
				break;
			case 7:
				printf("July,31");
				break;
			case 8:	
				printf("August,31");
				break;
			case 9:
				printf("September,30");
				break;
			case 10:
				printf("October,31");
				break;
			case 11:
				printf("November,30");
				break;
			case 12:
				printf("December,31");
				break;
		}
	}
	else 
	{
		printf("Enter valid number for months");
	}
	
	return 0;
}
