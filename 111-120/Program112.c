//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_so_far=arr[0];
    int max_ending_here=0;
    for(i=0;i<n;i++)
    {
        if(max_ending_here+arr[i]>arr[i])
        {
            max_ending_here=max_ending_here+arr[i];
        }
        else
        {
            max_ending_here=arr[i];
        }
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
        }
    }
    printf("Maximum sum= %d",max_so_far);
}
