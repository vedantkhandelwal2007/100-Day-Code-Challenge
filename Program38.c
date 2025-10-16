// Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a Number");
	scanf("%d",&i);
	while(i>0)
	{
		n=i%10;
		sum=sum+n;
		i=i/10;
	}
	printf("Sum of Digits= %d\n",sum);
	return 0;	
}
