//Q83: Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  

    int i, cv = 0, cc = 0;

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                cv++;
            } else {
                cc++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", cv, cc);
    return 0;
}
