//Q74: Find the transpose of a matrix.
//
///*
//Sample Test Cases:
//Input 1:
//2 3
//1 2 3
//4 5 6
//Output 1:
//1 4
//2 5
//3 6
//
//*/

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number of rows: ");
	scanf("%d",&x);
	
	printf("Enter number of columns: ");
	scanf("%d",&y);
	
	int arr1[x][y],i,j;
	printf("Input elements in the matrix: \n");
	for(i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("The Matrix is: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}

	printf("The Transpose Matrix is: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr1[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}



