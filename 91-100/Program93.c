// Q93: Check if two strings are anagrams of each other.

// /*
// Sample Test Cases:
// Input 1:
// listen
// silent
// Output 1:
// Anagrams

// Input 2:
// hello
// world
// Output 2:
// Not anagrams

// */

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100],temp;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }
    int i, j;
    for (i = 0; i < strlen(str1) - 1; i++) {
        for (j = i + 1; j < strlen(str1); j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (i = 0; i < strlen(str2) - 1; i++) {
        for (j = i + 1; j < strlen(str2); j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    int same = 1;  

    for (i = 0; str1[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
        same = 0;
        break;
        }
    }

    if (same == 1)
    printf("Anagrams\n");
    else
    printf("Not anagrams\n");

    return 0;
}



