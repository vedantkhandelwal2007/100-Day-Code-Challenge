// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    long long bin, complement = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0)
    {
        digit = bin % 10;
        if (digit == 0)
            digit = 1;
        else
            digit = 0;
        complement = digit * place + complement;

        place *= 10;
        bin /= 10; 
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}
