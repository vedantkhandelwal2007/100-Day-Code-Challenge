// Q52: Write a program to print the following pattern:
//
//*
//
//*
//*
//*
//
//*
//*
//*
//*
//*
//
//*
//*
//*
//
//*
//
//
//
///*

#include <stdio.h>

int main() {
    int i, j, stars;

    for (i = 1; i <= 5; i++) {        
        if (i <= 3)
            stars = 2 * i - 1;        
        else
            stars = 2 * (6 - i) - 1;  

        for (j = 1; j <= stars; j++) 
            printf("*\n");

        printf("\n"); 
    }

    return 0;
}
