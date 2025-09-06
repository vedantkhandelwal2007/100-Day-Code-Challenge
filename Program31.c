// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, temp, divisor;
    scanf("%d", &num);

    divisor = 1;
    temp = num;
    while (divisor <= temp)
        divisor = divisor * 2;
    divisor = divisor / 2;

    while (divisor > 0) {
        if (num >= divisor) {
            printf("1");
            num = num - divisor;
        } else {
            printf("0");
        }
        divisor = divisor / 2;
    }
    printf("\n");
    return 0;
}
