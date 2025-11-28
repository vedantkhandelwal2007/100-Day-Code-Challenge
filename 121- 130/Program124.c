// Q124: Take two filenames from the user – a source file and a destination file. 
// Copy all the content from the source file to the destination file using fgetc() and fputc().

// /*
// Sample Test Cases:
// Input 1:
// Source File: source.txt (Content: Learning C File Handling)
// Output 1:
// File copied successfully to destination.txt

// */

#include<stdio.h>
int main(){
    char sfile[100], dfile[100];
    FILE *src, *dest;
    printf("Enter source file name: ");
    scanf("%s", sfile);
    printf("Enter destination file name: ");
    scanf("%s", dfile);
    src = fopen(sfile, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }
    dest = fopen(dfile, "w");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully to %s\n", dfile);
    fclose(src);
    fclose(dest);
    return 0;
}
