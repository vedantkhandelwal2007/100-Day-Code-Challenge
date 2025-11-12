//Q69: Find the second largest element in an array.

#include<stdio.h>
int main()
{
	int i,e;
	printf("How many elements you want in array?:");
	scanf("%d",&e);
	
	int arr[e];
	printf("Enter the elements:\n");
	for(i=0;i<e;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(e < 2) {
        printf("Array should have at least 2 elements.\n");
        return 0;
    }
	int max=0,smax=0;
	if(arr[0] > arr[1]) {
        max = arr[0];
        smax = arr[1];
    } else {
        max = arr[1];
        smax = arr[0];
    }
    
    for(i = 2; i < e; i++) {
        if(arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }
	printf("%d",smax);
	return 0;
}
