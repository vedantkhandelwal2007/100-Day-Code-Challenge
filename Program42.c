// Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
