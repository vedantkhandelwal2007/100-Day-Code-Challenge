//Q62: Reverse an array without taking extra space.
//
///*
//Sample Test Cases:
//Input 1:
//4
//1 2 3 4
//Output 1:
//4 3 2 1
//
//*/

#include<stdio.h>
int main()
{
	int i, n=0;
	printf("How many values you want to add?:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Value %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Numbers in Reverse Direction: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
