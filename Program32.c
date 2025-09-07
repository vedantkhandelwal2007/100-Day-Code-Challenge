// Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a Number:");
	scanf("%d",&num);
	int temp=num;
	int sum,n;
	while(num>0)
	{
		n=num%10;
		sum=(sum*10)+n;
		num=num/10;
	}
	if (sum==temp)
	{
		printf("IT IS A PALINDROME.");
	}
	else
	{
		printf("IT IS NOT A PALINDROME.");
	}
	return 0;	
}
