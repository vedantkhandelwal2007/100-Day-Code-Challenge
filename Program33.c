// Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a Number: ",num);
	scanf("%d",&num);
	int temp=num;
	int sum=0,n;
	while(num>0)
	{
		n=num%10;
		sum=sum+(n*n*n);
		num=num/10;
	}
	if (sum==temp)
	{
		printf("IT IS ARMSTRONG.");
	}
	else
	{
		printf("IT IS NOT ARMSTRONG.");
	}
	return 0;	
}
