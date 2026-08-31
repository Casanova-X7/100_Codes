#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    long long fact;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Copy original number to preserve its value
    originalNum = num;

    // Process each digit of the number
    while (num > 0) {
        rem = num % 10; // Extract the last digit

        // Calculate factorial of the extracted digit
        fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;   // Add the factorial to sum
        num /= 10;     // Remove the last digit
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}