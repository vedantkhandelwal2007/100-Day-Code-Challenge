//Q63: Merge two arrays.
//
///*
//Sample Test Cases:
//Input 1:
//3
//1 2 3
//2
//4 5
//Output 1:
//1 2 3 4 5
//
//*/

#include<stdio.h>
int main()
{
	int i, n1=0,n2=0,j;
	printf("How many values you want to add in array1?:");
	scanf("%d",&n1);
	
	int arr1[n1];
	for(i=0;i<n1;i++)
	{
		printf("Enter Value %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	
	printf("How many values you want to add in array2?:");
	scanf("%d",&n2);
	
	int arr2[n2];
	for(j=0;j<n2;j++)
	{
		printf("Enter Value %d:",j+1);
		scanf("%d",&arr2[j]);
	}
	int n3=n1+n2;
	int arr3[n3];

    for(i = 0; i < n1; i++)
        arr3[i] = arr1[i];

    for(j = 0; j < n2; j++)
        arr3[n1+j] = arr2[j];
        
	for(i = 0; i < n3; i++)
        printf("%d ", arr3[i]);
	
	return 0;
}

