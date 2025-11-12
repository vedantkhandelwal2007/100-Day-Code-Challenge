// Q96: Reverse each word in a sentence without changing the word order.

// /*
// Sample Test Cases:
// Input 1:
// I love coding
// Output 1:
// I evol gnidoc

// */

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a sentence: ");
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i,j,k,len;
    len = strlen(str);
    for (i = 0; i < len; i++) {
        
        j = i;
        while (str[j] != ' ' && str[j] != '\0') {
            j++;
        }

     
        for (int k = j - 1; k >= i; k--) {
            printf("%c", str[k]);
        }

    
        if (str[j] == ' ')
            printf(" ");

        i = j;
    }
    return 0;
}
