// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int num, sum = 0, n;
    printf("Enter a Number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        n = num % 10;
        sum = (sum * 10) + n;
        num = num / 10;
    }
    printf("%d\n", sum);
    return 0;
}
