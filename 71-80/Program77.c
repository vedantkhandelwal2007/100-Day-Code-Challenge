//Q77: Check if the elements on the diagonal of a matrix are distinct.
//
///*
//Sample Test Cases:
//Input 1:
//3 3
//1 2 3
//4 5 6
//7 8 1
//Output 1:
//False
//
//Input 2:
//3 3
//1 2 3
//4 5 6
//7 8 9
//Output 2:
//True
//
//*/

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number of rows:");
	scanf("%d",&x);
	
	printf("Enter number of columns:");
	scanf("%d",&y);
	
	int matrix[x][y],i,j;
	printf("Enter Elements:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int diff=1,n=0;
	if(x>y)
	{
		n=y;
	}
	else
	{
		n=x;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(matrix[i][i]==matrix[j][j])
			{
				diff=0;
				break;
			}
		}
		if(diff==0) break;
	}
	if (diff==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
