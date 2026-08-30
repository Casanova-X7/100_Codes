#include <stdio.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit;
    int digitsCount = 0;
    int divisor = 1;
    int middlePart, swappedNum;

    // Prompt user for input
    printf("Enter any number: ");
    scanf("%d", &num);

    originalNum = num; // Save original number

    // Extract the last digit
    lastDigit = num % 10;

    // Find the total number of digits and the divisor for the first digit
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    
    // The remaining single digit in temp is the first digit
    firstDigit = temp;

    // Extract the middle part of the number
    // Formed by removing the first digit and the last digit
    middlePart = (num % divisor) / 10;

    // Reconstruct the number with swapped digits
    if (num < 10 && num >= 0) {
        // If the number is a single digit, it remains the same
        swappedNum = num;
    } else {
        swappedNum = (lastDigit * divisor) + (middlePart * 10) + firstDigit;
    }

    // Print the result
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
