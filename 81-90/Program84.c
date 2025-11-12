//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin); 

    int i;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c", ch);
    }

    return 0;
}
