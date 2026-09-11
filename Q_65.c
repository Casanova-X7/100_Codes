#include <stdio.h>

int main() {
    int n, search;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == search) {
            found = mid;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}