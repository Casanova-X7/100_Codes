#include <stdio.h>

int main() {
    int rows, cols, distinct = 1;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check diagonal elements
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (arr[i][i] == arr[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}