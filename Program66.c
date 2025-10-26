//Q66: Insert an element in a sorted array at the appropriate position.
//
///*
//Sample Test Cases:
//Input 1:
//5
//1 2 4 5 6
//3
//Output 1:
//1 2 3 4 5 6
//
//*/

#include<stdio.h>
int main(){
	int arr[100],n,i,element,pos;
	
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to insert:");
	scanf("%d",&element);
	
	printf("Enter position to insert (0 to %d):",n);
	scanf("%d",&pos);
	
	if(pos<0 || pos>n)
	{
		printf("Invalid Position!\n");
		return 0;
	}
	for (i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	
	arr[pos]=element;
	n++;
	
	printf("Array after insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	
	return 0;
}


