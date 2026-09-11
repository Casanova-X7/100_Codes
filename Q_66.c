#include <stdio.h>

int main() {
    int n, x, i;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    // Find position
    i = n - 1;

    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = x;

    // Print array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}