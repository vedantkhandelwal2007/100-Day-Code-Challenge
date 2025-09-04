// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a Number %d",num);
	scanf("%d",&num);
	
	int sum,n;
	while(num>0)
	{
		n=num%10;
		sum=(sum*10)+n;
		num=num/10;
	}
	printf("%d",sum);
	return 0;	
}
