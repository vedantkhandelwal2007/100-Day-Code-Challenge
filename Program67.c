//Q67: Insert an element in an array at a given position.
//
///*
//Sample Test Cases:
//Input 1:
//4
//10 20 30 40
//2 15
//Output 1:
//10 20 15 30 40
//
//*/

#include<stdio.h>
int main() {
    int arr[100], n, i, element, pos;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &element);
    
    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    
    if(pos < 1 || pos > n+1) {
        printf("Invalid Position!\n");
        return 0;
    }
    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos] = element;
    n++;
    
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


