// Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter value for n:");
    scanf("%d",&n);
    
    int i, sum = 0, odd = 1;
    for(i = 1; i <= n; i++)
    {
        sum = sum + odd;
        odd = odd + 2;    
    }
    printf("Sum is: %d", sum);
    return 0;
}
