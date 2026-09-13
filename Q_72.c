#include <stdio.h>

int main() {
    int rows, columns, sum = 0;

    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}