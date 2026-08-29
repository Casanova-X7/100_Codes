#include <stdio.h>

int main() {
    int num, temp, digit;
    long long product = 1;
    int has_odd = 0; // Flag to track if the number contains any odd digits

    // Input number from user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Copying original number to a temporary variable
    temp = num;

    // Handle negative numbers by making them positive
    if (temp < 0) {
        temp = -temp;
    }

    // Process digits from right to left
    while (temp != 0) {
        digit = temp % 10; // Extract the last digit

        // Check if the digit is odd
        if (digit % 2 != 0) {
            product *= digit; // Multiply to product
            has_odd = 1;      // Set flag to true
        }

        temp /= 10; // Remove the last digit
    }

    // Output the result
    if (has_odd) {
        printf("The product of the odd digits of %d is: %lld\n", num, product);
    } else {
        printf("The number %d does not contain any odd digits.\n", num);
    }

    return 0;
}
