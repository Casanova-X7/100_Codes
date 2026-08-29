#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char binary[MAX_SIZE];
    char ones_complement[MAX_SIZE];
    int i, length;
    int is_valid = 1;

    // Input binary string from user
    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    length = strlen(binary);

    // Process each bit to find 1's complement
    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            ones_complement[i] = '0';
        } else if (binary[i] == '0') {
            ones_complement[i] = '1';
        } else {
            is_valid = 0;
            break;
        }
    }
    
    // Null-terminate the complement string
    ones_complement[length] = '\0';

    // Print result if input is valid binary
    if (is_valid) {
        printf("Original binary:   %s\n", binary);
        printf("1's complement:    %s\n", ones_complement);
    } else {
        printf("Error: Invalid binary string. Only '0' and '1' are allowed.\n");
    }

    return 0;
}
