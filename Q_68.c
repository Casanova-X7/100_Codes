#include <stdio.h>

int main() {
    int n, position;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    // Move elements to the left
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}