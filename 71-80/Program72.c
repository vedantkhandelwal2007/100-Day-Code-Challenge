//Q72: Find the sum of all elements in a matrix.
//
///*
//Sample Test Cases:
//Input 1:
//2 3
//1 2 3
//4 5 6
//Output 1:
//21
//
//*/

#include <stdio.h>

int main() {
    int m, n;
    int i,j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
	int sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("Sum is %d:",sum);
    return 0;
}

