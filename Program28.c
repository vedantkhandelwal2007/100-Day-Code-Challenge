// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main()
{
	int n;
	printf("Enter value for n:");
	scanf("%d",&n);
	
	int i,product=1;
	for(i=2;i<=n;i=i+2)
	{
		product=product*i;	
	}
	printf("%d",product);
	
	return 0;
}
