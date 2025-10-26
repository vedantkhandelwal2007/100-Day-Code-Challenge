//Q58: Find the maximum and minimum element in an array.
//
///*
//Sample Test Cases:
//Input 1:
//5
//2 9 1 4 7
//Output 1:
//Max=9, Min=1
//
//Input 2:
//3
//10 10 10
//Output 2:
//Max=10, Min=10
//
//*/


#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i, max, min;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    max= num[0];
    min =num[0];

    for (i=0;i<n;i++)
    {
        if(num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    printf("The Maximum Number is: %d\nThe Minimum Number is: %d", max, min);

    return 0;
}

