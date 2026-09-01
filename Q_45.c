#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (2.0 * i) / (4.0 * i - 1);
    }

    printf("Approximate sum: %.2lf", sum);

    return 0;
}