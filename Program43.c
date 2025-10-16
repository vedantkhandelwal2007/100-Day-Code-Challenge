// Q43: Write a program to check if a number is a strong number.

#include<stdio.h>
int main()
{
	int num,temp;
	printf("Enter a Number:");
	scanf("%d",&num);
	
	temp=num;
	
	int i,n,sum=0;
	while(num>0)
	{
		n=num%10;
		int fact=1;
		for(i=1;i<=n;i++)
	{
		
		fact = fact*i;
		
	}
	sum=sum+fact;
		num=num/10;
}
	if(temp==sum)
	{
		printf("It is a Strong Number!");
	}
	else
	{
		printf("It is not a Strong Number!");
	}
	return 0;
}
