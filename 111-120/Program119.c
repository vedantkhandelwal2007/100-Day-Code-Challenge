// Q119: Write a program to take an integer array as input. 
//Only one element will be repeated. Print the repeated element. 
//Try to find the result in one single iteration.

// /*
// Sample Test Cases:
// Input 1:
// nums1 = [1,3,3,4]
// Output 1:
// 3

// Input 2:
// nums1 = [1,2,2]
// Output 2:
// 2

// Input 3:
// nums1 = [0,4,1,1,5]
// Output 3:
// 1

// */

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (only one element will be repeated):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("The repeated element is: %d\n", arr[i]);
                return 0;
            }
        }
    }
    printf("No repeated element found.\n");
    return 0;
}

    
