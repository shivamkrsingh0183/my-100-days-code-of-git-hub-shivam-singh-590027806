#include<stdio.h>
#include<string.h>


int main() {
    int m, n;
    printf("enter order of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int d = 0; d < m + n - 1; d++) {
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;

        while (row < m && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }
    return 0;
}

//QUESTION2:multiply two matrices
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("enter order of matrix: ");
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];
    printf("enter first matrix: ");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter order of matrix: ");
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];
    printf("enter second matrix: ");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (n1 != m2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int c[m1][n2];
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}