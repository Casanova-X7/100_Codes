#include <stdio.h>

int main() {
    char str[100];
    printf("Choose ur operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Quotient\n");

    printf("Enter your choice: ");
    scanf("%s", str);

    if (strcmp(str, "1") == 0) {
        int a, b, sum;
        printf("Enter first integer: \n");
        scanf("%d", &a);
        printf("Enter second integer: \n");
        scanf("%d", &b);
        sum = a + b;
        printf("Sum: %d\n", sum);
    } else if (strcmp(str, "2") == 0) {
        int a, b, difference;
        printf("Enter first integer: \n");
        scanf("%d", &a);
        printf("Enter second integer: \n");
        scanf("%d", &b);
        difference = a - b;
        printf("Difference: %d\n", difference);
    } else if (strcmp(str, "3") == 0) {
        int a, b, product;
        printf("Enter first integer: \n");
        scanf("%d", &a);
        printf("Enter second integer: \n");
        scanf("%d", &b);
        product = a * b;
        printf("Product: %d\n", product);
    } else if (strcmp(str, "4") == 0) {
        int a, b;
        float quotient;
        printf("Enter first integer: \n");
        scanf("%d", &a);
        printf("Enter second integer: \n");
        scanf("%d", &b);
        if (b != 0) {
            quotient = (float)a / b;
            printf("Quotient: %.2f\n", quotient);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice. Please select a valid operation.\n");
    }

    return 0;
    
}