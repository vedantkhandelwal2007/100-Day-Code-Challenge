//Q68: Delete an element from an array.

#include<stdio.h>
int main() {
    int arr[100], n, i, pos;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    
    if(pos < 1 || pos > n) {
        printf("Invalid Position!\n");
        return 0;
    }
    
    
    
    for(i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    
    n--; 
    
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
