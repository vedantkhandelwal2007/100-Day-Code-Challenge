// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

// /*
// Sample Test Cases:
// Input 1:
// ADD 10 20
// Output 1:
// 30

// */

#include <stdio.h>
#include <string.h>
int main() {
    enum menu { 
        ADD, 
        SUBTRACT, 
        MULTIPLY 
    };
    char op[8];
    int a, b;
    enum menu choice;

    scanf("%s %d %d", op, &a, &b);
    printf("--\n");
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid");
        return 0;
    }

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
