// Q24: Write a program to calculate an electricity bill based on units consumed.
/*Bill charge per unit consumption: 
		1. for the first 100 units charge per unit is Rs5. 
		2. for the next 100 units charge per unit is Rs10. 
		3. for the next 100 units charge per unit is Rs20. 
		4. for the next 100 units charge per unit is Rs30. 
		5. for the next 100 units charge per unit is Rs40.  
		6. for more than 500 units charge per unit is Rs50.
  */

#include <stdio.h>

int main()
{
	float units;
	printf("Enter Number of Units Used:");
	scanf("%f",&units);
	
	float cost=0;
	
	if (units==0)
	{
	printf("No Bill!");
}

	else if (units>0 && units<=100)
{
	cost=units*5.0;
	printf("Your Total Bill is: rs%f",cost);
}

	else if (units>100 && units<=200)
{
	cost=units*6.333333333333333;
	printf("Your Total Bill is: rs%f",cost);
}

	else if (units>200)
{
	cost=units*8.8;
	printf("Your Total Bill is: rs%f",cost);
}

return 0;
}
