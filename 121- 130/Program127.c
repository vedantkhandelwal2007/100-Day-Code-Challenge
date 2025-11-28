// Q127: Write a program that reads text from input.txt, 
// converts all lowercase letters to uppercase, and writes the result to output.txt.

// /*
// Sample Test Cases:
// Input 1:
// Input File (input.txt): Hello World\nC programming
// Output 1:
// Output File (output.txt): HELLO WORLD\nC PROGRAMMING

// */

#include<stdio.h>
int main()
{
    FILE *input=fopen("input.txt", "r");
    if(input==NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }
    FILE *output=fopen("output.txt", "w");
    if(output==NULL)
    {
        printf("Error opening output file.\n");
        fclose(input);
        return 1;
    }
    int ch;
    while((ch=fgetc(input))!=EOF)
    {
        if(ch>='a' && ch<='z')
        {
            ch=ch-32;
        }
        fputc(ch, output);
    }
    fclose(input);
    fclose(output);
    printf("File converted to uppercase and saved to output.txt\n");
    return 0;
}
