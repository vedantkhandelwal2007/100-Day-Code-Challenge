// Q92: Find the first repeating lowercase alphabet in a string.

// /*
// Sample Test Cases:
// Input 1:
// stress
// Output 1:
// s

// */

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    int i,j=0;
    char result;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            for(j=i+1;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    result = str[i];
                }
            }
        }
    }
    printf(" %c", result);
    return 0;
}
