#include <stdio.h>

int main() {
    // Increasing part
    for (int i = 1; i <= 4; i++) {

        // Spaces
        for (int j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Decreasing part
    for (int i = 3; i >= 1; i--) {

        // Spaces
        for (int j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}