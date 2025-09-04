//Q23: Write a program to calculate library fine based on late days as follows: 
/* First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */

#include<stdio.h>

int main()
{
	int day;
	printf("Enter the Number of Days you are late for book submission:");
	scanf("%d",&day);
	
	int fine=0;
	
	if (day==0)
	{
	printf("No Fine!");
}

	else if (day>0 && day<=5)
{
	fine=day*2;
	printf("Your Total fine is: %d",fine);
}

	else if (day>5 && day<=10)
{
	fine=day*4;
	printf("Your Total fine is: %d",fine);
}

	else if (day>10 && day<31)
{
	fine=day*6;
	printf("Your Total fine is: %d",fine);
}

	else
{
		printf("MEMBERSHIP CANCELLED!");
}
	return 0;
}
