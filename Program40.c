// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main()
{
	int i,n,z;
	printf("Enter a Number:");
	scanf("%d",&i);
	while(i>0)
	{
		n=i%10;
		if(n==1)
		{
			z=0;
		}
		else if(n==0)
		{
			z=1;
		}
		printf("%d ",z);
		i=i/10;
	}
	
	return 0;	
}
