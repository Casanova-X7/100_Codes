#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Diagonal traversal
    for (int k = 0; k < rows + cols - 1; k++) {

        for (int i = 0; i < rows; i++) {
            int j = k - i;

            if (j >= 0 && j < cols) {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}