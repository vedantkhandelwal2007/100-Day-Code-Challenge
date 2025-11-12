//Q78: Find the sum of main diagonal elements for a square matrix.
//
///*
//Sample Test Cases:
//Input 1:
//3 3
//1 2 3
//4 5 6
//7 8 9
//Output 1:
//15
//
//*/

#include<stdio.h>
int main()
{
	int x;
	printf("Enter number of rows for square matrix:");
	scanf("%d",&x);
	
	int arr1[x][x],i,j,sum=0;
	printf("Input elements in the matrix: \n");
	for(i=0;i<x;i++)
	{
		for (j=0;j<x;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if (i==j)
			{
				sum = sum + arr1[i][j];
			}
		}
	}
	printf("Sum of Diagonal Elements is: %d",sum);
	return 0;
}
