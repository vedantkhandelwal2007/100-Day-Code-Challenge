// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

// /*
// Sample Test Cases:
// Input 1:
// FAILURE
// Output 1:
// Operation failed

// */

#include<stdio.h>
#include<string.h>
int main(){
    enum status{
        SUCCESS,
        FAILURE,
        TIMEOUT
    };
    char input[10];
    enum status st;

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        st = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        st = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        st = TIMEOUT;
    else {
        printf("Invalid");
        return 0;
    }

    if (st == SUCCESS)
        printf("Operation successful");
    else if (st == FAILURE)
        printf("Operation failed");
    else if (st == TIMEOUT)
        printf("Operation timed out");

    return 0;
}
