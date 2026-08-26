#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0, 1, and negative numbers are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 up to the square root of num
        // i * i <= num is a cleaner alternative to using sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so it is not prime
                break;       // Exit the loop early
            }
        }
    }

    // Output the final result based on the flag
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
