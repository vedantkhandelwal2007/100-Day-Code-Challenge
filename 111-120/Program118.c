// Q118: Write a program to take an input array of size n. 
// The array should contain all the integers between 0 to n except for one. 
// Print that missing number

// /*
// Sample Test Cases:
// Input 1:
// nums1 = [0,3,2,4]
// Output 1:
// 1

// Input 2:
// nums1 = [1,2,3]
// Output 2:
// 0

// Input 3:
// nums1 = [0,4,3,1,5]
// Output 3:
// 2

// */

#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the elements of the array (between 0 to %d except one):\n", n-1);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,tsum=0;
    for(i=0;i<n;i++)
    {
        tsum+=i;
    }
    for(i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    int missing=tsum-sum;
    printf("The missing number is: %d\n",missing);
    return 0;
}
