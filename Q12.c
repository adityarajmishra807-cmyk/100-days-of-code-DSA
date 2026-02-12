#include <stdio.h>

int main() {
    int m, n;

    // Read rows and columns
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input matrix elements
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if square
    if(m != n) {
        printf("Not a Symmetric Matrix");
        return 0;
    }

    int flag = 1;

    // Check symmetry
    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
