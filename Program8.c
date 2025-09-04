// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
	int i,n,sum=0;
	printf("Enter value of n(value till which number sum is needed): ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i=i+1)
	{
		sum=sum+i;
	}
	
	printf("The sum of first %d natural numbers is: %d",n,sum);
	return 0;
}
