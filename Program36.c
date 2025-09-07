// Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main()
{
	int num1,num2, i, hcf;
	printf("Enter First Number:");
	scanf("%d",&num1);
	
	printf("Enter Second Number:");
	scanf("%d",&num2);
	
	for (i = 1; i <= num1 && i <= num2; i++) 
	{
        if (num1 % i == 0 && num2 % i == 0) 
		{
            hcf = i;
        }
    }

    printf("HCF is: %d\n", hcf);
	return 0;
}
