#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of main diagonal
    for (int i = 0; i < rows; i++) {
        sum = sum + arr[i][i];
    }

    printf("%d", sum);

    return 0;
}