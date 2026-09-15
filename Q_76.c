#include <stdio.h>

int main() {
    int n, m, symmetric = 1;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) {
        symmetric = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] != arr[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}