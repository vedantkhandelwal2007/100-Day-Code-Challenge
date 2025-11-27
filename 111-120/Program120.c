// Q120: Write a program to take a string input. Change it to sentence case.

// /*
// Sample Test Cases:
// Input 1:
// str = I am trying to build logic.
// Output 1:
// I Am Trying To Build Logic

// Input 2:
// str = The classes are supposed to start early.
// Output 2:
// The Classes Are Supposed To Start Early.

// Input 3:
// str = We are going to look at 26 different test cases.
// Output 3:
// We Are Going To Look At 26 Different Test Cases.

// */

#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int i;
    int newword=1;
    for(i=0;i<len;i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            newword=1;
        }
        else if(newword==1){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-32; 
            }
            newword=0;
        }
        else{
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+32; 
            }
        }
    }
    printf("The string in sentence case is: %s", str);
    return 0;
}
