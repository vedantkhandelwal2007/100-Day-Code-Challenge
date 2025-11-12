//Q73: Find the sum of each row of a matrix and store it in an array.
//
///*
//Sample Test Cases:
//Input 1:
//2 3
//1 2 3
//4 5 6
//Output 1:
//6 15
//
//*/

#include <stdio.h>

int main() {
    int m, n;
    int i, j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum[m];

    for(i = 0; i < m; i++) {
        sum[i] = 0;
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i] += a[i][j];
        }
    }

    for(i = 0; i < m; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}


