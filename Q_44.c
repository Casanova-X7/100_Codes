#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input the number of terms
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0; // The first term is explicitly 1
        } else {
            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            sum += numerator / denominator;
        }
    }

    // Print the final result
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
