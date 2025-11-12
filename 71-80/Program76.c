//Q76: Check if a matrix is symmetric.
//
///*
//Sample Test Cases:
//Input 1:
//2 2
//1 2
//2 1
//Output 1:
//True
//
//Input 2:
//2 2
//1 0
//2 1
//Output 2:
//False
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
	
	if (x!=y)
	{
		printf("It can't be symmetric since it is not a square matrix!");
}
else{

	int matrix[x][y],i,j;
	printf("Enter Elements:");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int transpose[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			transpose[i][j]=matrix[j][i];
		}
	}
	
	int sym=1;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(matrix[i][j] != transpose[i][j]) {
                sym = 0;
                break;
		}
	}
}
	if(sym==1)
	{
		printf("Given Matrix is Symmetric.");
	}
	else
	{
		printf("Given Matrix is not Symmetric.");
	}
}
	return 0;
}
