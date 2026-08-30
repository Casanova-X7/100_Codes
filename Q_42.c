#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find and sum all proper divisors
    // A proper divisor cannot be greater than num / 2
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the original number
    if(sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}
