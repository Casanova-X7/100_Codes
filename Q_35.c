#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    printf("Factors of %d are: ", num);

    // Loop from 1 to the number to check for divisibility
    for (i = 1; i <= num; ++i) {
        // If remainder is 0, i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
