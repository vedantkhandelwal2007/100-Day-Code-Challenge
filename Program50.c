// Q50: Write a program to print the following pattern:

//*****
//  ****
//    ***
//      **
//        *

#include<stdio.h>

int main()
{
    int i,j;

    for(i = 0; i < 5; i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
