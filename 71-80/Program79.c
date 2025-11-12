//Q79: Perform diagonal traversal of a matrix.
//
///*
//Sample Test Cases:
//Input 1:
//3 3
//1 2 3
//4 5 6
//7 8 9
//Output 1:
//1 2 4 7 5 3 6 8 9
//
//*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal Traversal:\n");
	int d;
    for(d = 0; d <= n + m - 2; d++) {
        if(d % 2 == 0) {
            
            int s;
            if(d < n)
                s = d;
            else
                s = n - 1;

            for(i = s; i >= 0; i--) {
                j = d - i;
                if(j >= 0 && j < m)
                    printf("%d ", matrix[i][j]);
            }
        } else {
            
            for(i = 0; i <= d; i++) {
                j = d - i;
                if(i < n && j < m)
                    printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}

