#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int sum[rows];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    // Print sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}