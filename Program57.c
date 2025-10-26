//Q57: Find the sum of array elements.
//
///*
//Sample Test Cases:
//Input 1:
//4
//2 4 6 8
//Output 1:
//20
//
//Input 2:
//3
//1 1 1
//Output 2:
//3
//
//*/

#include <stdio.h>

int main() {
    int n, i,sum=0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
	printf("Sum of elements is: %d",sum);
    return 0;
}
