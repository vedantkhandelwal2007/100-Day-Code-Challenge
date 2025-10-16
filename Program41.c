// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, first, last, temp, power = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;


    int middle = (num % power) / 10;

    int swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
