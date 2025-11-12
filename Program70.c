//Q70: Rotate an array to the right by k positions.

#include<stdio.h>
int main()
{
    int i, e;
    printf("How many elements you want in array?: ");
    scanf("%d", &e);
    
    int arr[e];
    printf("Enter the elements:\n");
    for(i = 0; i < e; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int n;
    printf("Enter the number you want to rotate the array to the right: ");
    scanf("%d", &n);
    
    n = n % e;
    
    int temp[e];
    
    for(i = 0; i < n; i++) {
        temp[i] = arr[e - n + i];
    }
    
    for(i = 0; i < e - n; i++) {
        temp[n + i] = arr[i];
    }
    
    printf("Array after rotation:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    return 0;
}
