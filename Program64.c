//Q64: Find the digit that occurs the most times in an integer number.
//
///*
//Sample Test Cases:
//Input 1:
//112233
//Output 1:
//1
//
//Input 2:
//887799
//Output 2:
//7
//
//*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);

    int maxDigit = 0, maxCount = 0,d;
    for(d = 0; d <= 9; d++) {
        int temp = num;
        int count = 0;
        while(temp > 0) {
            if(temp % 10 == d)
                count++;
            temp = temp / 10;
        }
        if(count > maxCount) {
            maxCount = count;
            maxDigit = d;
        }
    }

    printf("%d", maxDigit);
    return 0;
}


